#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272.h"
#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c.h"

typedef union ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationKey;

typedef struct ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo {
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
} ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_reconstruct_previous_depth_pass_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo g_ffx_frameinterpolation_reconstruct_previous_depth_pass_PermutationInfo[] = {
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_CBVResourceSpaces, 2, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_2e1c962a62afcf9213d00c4e07f5e272_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_CBVResourceSpaces, 2, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_c04e0059fd97ce60b519ccc1c986763c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

