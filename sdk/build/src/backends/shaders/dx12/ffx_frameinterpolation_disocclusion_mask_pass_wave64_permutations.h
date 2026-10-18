#include "ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0.h"
#include "ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8.h"

typedef union ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationKey {
    struct {
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_LOW_RES_MOTION_VECTORS : 1;
        uint32_t FFX_FRAMEINTERPOLATION_OPTION_JITTER_MOTION_VECTORS : 1;
    };
    uint32_t index;
} ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationKey;

typedef struct ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo {
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
} ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo;

static const uint32_t g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_IndirectionTable[] = {
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    1,
};

static const ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_PermutationInfo[] = {
    { g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_size, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_CBVResourceSpaces, 6, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_095ef6d8871abd58004971a7959538a0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_size, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_data, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_CBVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_CBVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_CBVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_CBVResourceSpaces, 6, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureSRVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureSRVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureSRVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureSRVResourceSpaces, 1, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureUAVResourceNames, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureUAVResourceBindings, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureUAVResourceCounts, g_ffx_frameinterpolation_disocclusion_mask_pass_wave64_178a30479ca95c00010e3b30b7f642e8_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

