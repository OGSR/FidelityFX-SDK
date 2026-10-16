#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_IndirectionTable[] = {
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
    6,
    5,
    7,
    1,
    4,
    0,
    3,
    2,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ad20bda376be35afa821f9d4067c4dae_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6984aa4025852fb4f419ab4868aa6a34_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_ff4ff739dc0b98c872bd60c70ee35e8b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_24d700c086ab27e639738c23a4b7403f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_6899b06a44840bba72250ddeb4422a92_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_86d2ad66087caeff0139f3613bdc3044_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_36441729f94baed413e8570314caedce_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_size, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_16bit_302e0969d9d17658709a2c6e081c127a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

