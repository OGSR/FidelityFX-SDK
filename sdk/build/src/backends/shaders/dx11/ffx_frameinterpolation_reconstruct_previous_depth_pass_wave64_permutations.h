#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11.h"
#include "ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f.h"

typedef union ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationKey;

typedef struct ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo {
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
} ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_IndirectionTable[] = {
    1,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
};

static const ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_PermutationInfo[] = {
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_CBVResourceSpaces, 2, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_7e715b507ac24b3b27246f60fa25ea11_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_size, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_data, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_CBVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_CBVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_CBVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_CBVResourceSpaces, 2, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureSRVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureSRVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureSRVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureUAVResourceNames, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureUAVResourceBindings, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureUAVResourceCounts, g_ffx_frameinterpolation_reconstruct_previous_depth_pass_wave64_63f875301ee80c38fe2a5af9f5b3636f_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

