#include "ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3.h"
#include "ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0.h"
#include "ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d.h"
#include "ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9.h"
#include "ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0.h"
#include "ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa.h"
#include "ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003.h"
#include "ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba.h"

typedef union ffx_fsr2_depth_clip_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_depth_clip_pass_PermutationKey;

typedef struct ffx_fsr2_depth_clip_pass_PermutationInfo {
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
} ffx_fsr2_depth_clip_pass_PermutationInfo;

static const uint32_t g_ffx_fsr2_depth_clip_pass_IndirectionTable[] = {
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
    6,
    5,
    7,
    2,
    1,
    0,
    3,
    4,
};

static const ffx_fsr2_depth_clip_pass_PermutationInfo g_ffx_fsr2_depth_clip_pass_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_size, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_data, 1, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_413439669a6fcdd0b211a22d84c325d3_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_size, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_data, 1, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_56bca9ecfdc2d9860db9b36abfc68dd0_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_size, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_data, 1, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_fc923bb976641ba721c910bb3c98613d_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_size, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_data, 1, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_e2c75168cadd5e1463d265aae1d243f9_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_size, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_data, 1, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_988456bfe0913cb05fa33b4df0df60c0_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_size, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_data, 1, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_e6b9bb4ab017490b7460aefd7185d8aa_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_size, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_data, 1, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_39880c07e6c142b91fce68fbd1f96003_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_size, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_data, 1, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_f458601bcba556753fea2ca3872ea8ba_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

