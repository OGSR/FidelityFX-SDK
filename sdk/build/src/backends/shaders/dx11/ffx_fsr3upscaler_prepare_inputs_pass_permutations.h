#include "ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f.h"

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
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
    4,
    6,
    2,
    5,
    7,
    1,
    3,
    0,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_size, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_820d9759976f252282a17d84dfc036ce_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_size, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_8618888b25d246fc02afea3c03ed08b8_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_size, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_ae3d0d87465c1f350c00ed40cd27d5a5_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_size, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_d7e4fcef1c4e0a9b28e885cbaba96c43_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_size, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_19179465a2012534722a42b0c7d6baaf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_size, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_61aafa3d4e6fc3f4337722c7c3d6f00a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_size, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_7feb6304b99822a1c1c51ba1c807b06f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_size, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_390562de459417b4cf8088be8e00f98f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

