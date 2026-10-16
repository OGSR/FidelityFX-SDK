#include "ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_IndirectionTable[] = {
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
    4,
    0,
    6,
    5,
    7,
    2,
    1,
    3,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_size, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_e234c4f3e0f0b66fc533a371404aae84_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_size, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_05a58fa48fa92ce44f907de17dc80c8e_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_size, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_52fa685037d9d16637a5dbec048b6ed9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_size, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_cafb2b7df1cdbc15650cedbc59e8d01f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_size, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_987b108f14f7fbc0934f1210ac9f0b6f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_size, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8654df13423ca8716113d6b4e9fd4f77_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_size, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_1e930b19466fd8a9b57993f817187ca4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_size, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_abb54ca248ee04207b5c7fb7d2cbb177_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

