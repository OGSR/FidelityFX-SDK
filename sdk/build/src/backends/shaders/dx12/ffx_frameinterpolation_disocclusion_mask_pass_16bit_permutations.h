#include "ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389.h"
#include "ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6.h"

typedef union ffx_frameinterpolation_disocclusion_mask_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_disocclusion_mask_pass_16bit_PermutationKey;

typedef struct ffx_frameinterpolation_disocclusion_mask_pass_16bit_PermutationInfo {
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
} ffx_frameinterpolation_disocclusion_mask_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_frameinterpolation_disocclusion_mask_pass_16bit_PermutationInfo g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_PermutationInfo[] = {
    { g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_size, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_CBVResourceSpaces, 6, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_5af19c0cd1d1e9454d33022d4f3b4389_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_size, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_CBVResourceSpaces, 6, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_16bit_362240966e087ef5a10f4e0b16dc80c6_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

