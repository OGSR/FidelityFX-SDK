#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_IndirectionTable[] = {
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
    5,
    4,
    7,
    2,
    3,
    0,
    1,
    6,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_f08eceef59ebf95d0b0d4917d1a52546_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_23cf665607af3574e63229a35177bfae_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_627dbfa9dd413e1894b43546568f9647_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6a7579074224b9f21eee41babe93e300_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_d3cf534935f7260687047702eb5de2a4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_9c4237a1d73fad052db9b3372f29e7ed_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_e149169ddaca4fd414a6144d616fa8bc_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_6f84c6f0cfb1200ac85360fc896df63c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

