#include "ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d.h"
#include "ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177.h"

typedef union ffx_fsr2_lock_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_lock_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_lock_pass_wave64_16bit_IndirectionTable[] = {
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
};

static const ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo g_ffx_fsr2_lock_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_size, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_data, 1, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_CBVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_CBVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_CBVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_2ef8ea1cd20a163b1d68ce6f3690ea1d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_size, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_data, 1, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_CBVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_CBVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_CBVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_wave64_16bit_f83221e7c730040b742fe122fde82177_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

