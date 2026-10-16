#include "ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb.h"
#include "ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2.h"

typedef union ffx_fsr2_lock_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_lock_pass_wave64_PermutationKey;

typedef struct ffx_fsr2_lock_pass_wave64_PermutationInfo {
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
} ffx_fsr2_lock_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_fsr2_lock_pass_wave64_IndirectionTable[] = {
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
    0,
    0,
};

static const ffx_fsr2_lock_pass_wave64_PermutationInfo g_ffx_fsr2_lock_pass_wave64_PermutationInfo[] = {
    { g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_size, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_data, 1, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_CBVResourceNames, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_CBVResourceBindings, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_CBVResourceCounts, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_wave64_44f9c83325419e2099db2634cbb05dcb_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_size, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_data, 1, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_CBVResourceNames, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_CBVResourceBindings, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_CBVResourceCounts, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_CBVResourceSpaces, 1, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureSRVResourceNames, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureSRVResourceBindings, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureSRVResourceCounts, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureSRVResourceSpaces, 2, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureUAVResourceNames, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureUAVResourceBindings, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureUAVResourceCounts, g_ffx_fsr2_lock_pass_wave64_19b8f5c2aa9c264a9d67de661eed42b2_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

