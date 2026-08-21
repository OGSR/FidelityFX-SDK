#include "ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185.h"
#include "ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446.h"

typedef union ffx_fsr1_easu_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR1_OPTION_APPLY_RCAS : 1;
        uint32_t FFX_FSR1_OPTION_RCAS_PASSTHROUGH_ALPHA : 1;
        uint32_t FFX_FSR1_OPTION_SRGB_CONVERSIONS : 1;
    };
    uint32_t index;
} ffx_fsr1_easu_pass_wave64_PermutationKey;

typedef struct ffx_fsr1_easu_pass_wave64_PermutationInfo {
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
} ffx_fsr1_easu_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr1_easu_pass_wave64_IndirectionTable[] = {
    1,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
};

static const ffx_fsr1_easu_pass_wave64_PermutationInfo g_ffx_fsr1_easu_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_size, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_data, 1, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_CBVResourceNames, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_CBVResourceBindings, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_CBVResourceCounts, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_SamplerResourceNames, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_SamplerResourceBindings, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_SamplerResourceCounts, g_ffx_fsr1_easu_pass_wave64_b6b14ebe599689ab6b33599ef5991185_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_size, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_data, 1, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_CBVResourceNames, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_CBVResourceBindings, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_CBVResourceCounts, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_CBVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureSRVResourceNames, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureSRVResourceBindings, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureSRVResourceCounts, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureSRVResourceSpaces, 1, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureUAVResourceNames, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureUAVResourceBindings, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureUAVResourceCounts, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_SamplerResourceNames, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_SamplerResourceBindings, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_SamplerResourceCounts, g_ffx_fsr1_easu_pass_wave64_8ad63a5c85b39967080fffb8d8899446_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

