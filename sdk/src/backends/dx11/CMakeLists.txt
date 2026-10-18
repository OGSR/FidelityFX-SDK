# This file is part of the FidelityFX SDK.
#
# Copyright (C) 2024 Advanced Micro Devices, Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files(the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions :
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.

# DX11 backend (OGSR): metarutaiga/FidelityFX-SDK-DX11's 1.1.4 backend, built next to the DX12 one (FFX_API_DX11).
# Only the FSR3 upscaler: its shaders are the DX12 pass wrappers compiled with FXC for SM 5.0 (CMakeShadersFSR3Upscaler.txt).

if(NOT FFX_API_DX11)
	return()
endif()

include("${CMAKE_CURRENT_SOURCE_DIR}/CMakeCompileShadersDX11.txt")

set(PRIVATE_SOURCE
	"${FFX_SHARED_PATH}/ffx_assert.cpp"
	"${FFX_SHARED_PATH}/ffx_message.cpp"
	"${FFX_SRC_BACKENDS_PATH}/shared/ffx_shader_blobs.h"
	"${FFX_SRC_BACKENDS_PATH}/shared/ffx_shader_blobs.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/ffx_dx11.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/DXBCChecksum.c"
	"${CMAKE_CURRENT_SOURCE_DIR}/md5.c"
	"${CMAKE_CURRENT_SOURCE_DIR}/md5.h")
set(PUBLIC_SOURCE "${FFX_HOST_BACKENDS_PATH}/dx11/ffx_dx11.h")

if (FFX_FSR3UPSCALER OR FFX_ALL)
	list(APPEND PRIVATE_SOURCE
		"${FFX_SRC_BACKENDS_PATH}/shared/blob_accessors/ffx_fsr3upscaler_shaderblobs.h"
		"${FFX_SRC_BACKENDS_PATH}/shared/blob_accessors/ffx_fsr3upscaler_shaderblobs.cpp")
	file(GLOB PRIVATE_SHADERS "${FFX_SRC_BACKENDS_PATH}/dx12/shaders/fsr3upscaler/*.hlsl")
endif()

if (FFX_BUILD_AS_DLL)
	add_library(ffx_backend_dx11_${FFX_PLATFORM_NAME} SHARED ${PRIVATE_SOURCE} ${PUBLIC_SOURCE} ${PRIVATE_SHADERS})
else()
	add_library(ffx_backend_dx11_${FFX_PLATFORM_NAME} STATIC ${PRIVATE_SOURCE} ${PUBLIC_SOURCE} ${PRIVATE_SHADERS})
endif()

source_group("private_source"  FILES ${PRIVATE_SOURCE})
source_group("public_source"   FILES ${PUBLIC_SOURCE})
source_group("private_shaders" FILES ${PRIVATE_SHADERS})

get_filename_component(FFX_PASS_SHADER_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/../shaders/dx11 ABSOLUTE)

target_include_directories(ffx_backend_dx11_${FFX_PLATFORM_NAME} PUBLIC ${FFX_INCLUDE_PATH})
target_include_directories(ffx_backend_dx11_${FFX_PLATFORM_NAME} PRIVATE ${FFX_COMPONENTS_PATH})
target_include_directories(ffx_backend_dx11_${FFX_PLATFORM_NAME} PRIVATE ${FFX_SHARED_PATH})
target_include_directories(ffx_backend_dx11_${FFX_PLATFORM_NAME} PRIVATE "${FFX_SRC_BACKENDS_PATH}/shared")
target_include_directories(ffx_backend_dx11_${FFX_PLATFORM_NAME} PRIVATE ${FFX_PASS_SHADER_OUTPUT_PATH})

target_link_libraries(ffx_backend_dx11_${FFX_PLATFORM_NAME} d3d11)

set_source_files_properties(${PRIVATE_SHADERS} PROPERTIES HEADER_FILE_ONLY TRUE)

file(MAKE_DIRECTORY ${FFX_PASS_SHADER_OUTPUT_PATH})

if (FFX_AUTO_COMPILE_SHADERS)
	set(FFX_SC_DEPENDENT_TARGET ffx_backend_dx11_${FFX_PLATFORM_NAME})
else()
	set(FFX_SC_DEPENDENT_TARGET ffx_backend_dx11_shaders_${FFX_PLATFORM_NAME})
	add_custom_target(${FFX_SC_DEPENDENT_TARGET})
endif()

# no WIN32_LEAN_AND_MEAN (unlike DX12): ffx_dx11.cpp uses MAKEFOURCC from mmsystem.h
target_compile_definitions(ffx_backend_dx11_${FFX_PLATFORM_NAME} PRIVATE
	NOMINMAX)

if (FFX_FSR3UPSCALER OR FFX_ALL)
	target_compile_definitions(ffx_backend_dx11_${FFX_PLATFORM_NAME} PRIVATE FFX_FSR3UPSCALER)
	include(CMakeShadersFSR3Upscaler.txt)
endif()

add_custom_target(ffx_shader_permutations_dx11 DEPENDS ${FFX_SC_PERMUTATION_OUTPUTS})
add_dependencies(${FFX_SC_DEPENDENT_TARGET} ffx_shader_permutations_dx11)

# Make sure shader builds are a dependency of the backend
add_dependencies(ffx_backend_dx11_${FFX_PLATFORM_NAME} ffx_shader_permutations_dx11)

# Add to solution folder.
set_target_properties(ffx_backend_dx11_${FFX_PLATFORM_NAME} PROPERTIES FOLDER Backends)
set_target_properties(ffx_shader_permutations_dx11 PROPERTIES FOLDER Backends)
