#include "ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61.h"
#include "ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf.h"
#include "ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074.h"
#include "ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528.h"
#include "ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4.h"
#include "ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607.h"
#include "ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930.h"
#include "ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d.h"

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
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
    4,
    0,
    6,
    2,
    5,
    1,
    7,
    3,
};

static const ffx_fsr2_depth_clip_pass_PermutationInfo g_ffx_fsr2_depth_clip_pass_PermutationInfo[] = {
    { g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_size, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_data, 1, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_f229288e33cef6464a0746f59e74da61_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_size, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_data, 1, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_cb4923d7a15de4f36c4f3f01b9125cbf_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_size, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_data, 1, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_ca57904c3675a1b996752e611cc60074_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_size, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_data, 1, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_13ca8201acc5be07c588ca5089002528_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_size, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_data, 1, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_f5479182c325f5896ff67e8e7de642a4_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_size, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_data, 1, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_c41cfea6838cbebec3136c298f223607_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_size, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_data, 1, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_be0f0830d36d24d83a6d5b1e00a22930_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_size, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_data, 1, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_CBVResourceNames, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_CBVResourceBindings, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_CBVResourceCounts, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_CBVResourceSpaces, 9, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureSRVResourceNames, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureSRVResourceBindings, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureSRVResourceCounts, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureSRVResourceSpaces, 2, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureUAVResourceNames, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureUAVResourceBindings, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureUAVResourceCounts, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_SamplerResourceNames, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_SamplerResourceBindings, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_SamplerResourceCounts, g_ffx_fsr2_depth_clip_pass_6cb2109f7567bd65769370ca4c7f9d9d_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

