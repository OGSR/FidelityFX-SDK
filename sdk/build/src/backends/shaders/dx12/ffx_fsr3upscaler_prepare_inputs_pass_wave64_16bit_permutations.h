#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c.h"
#include "ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b.h"

typedef union ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationKey;

typedef struct ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo {
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
} ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_IndirectionTable[] = {
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
    5,
    6,
    2,
    0,
    7,
    3,
    4,
    1,
};

static const ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_4e1cf14d59b48ee3083b8f3595d41a97_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_f979b19d275c97c96b8971a9d81717df_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_ceecd4dd41793c4bbcca453466241aa6_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_c108545c5a557125e553153e5c7f6663_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_47abac435c35d830e606a2d1c456b9f3_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_120170e44edd243ae8b005fb349f5773_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_aecfc0086ce62ffff00a61afa7faa56c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_size, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_data, 1, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_CBVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_CBVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_CBVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_CBVResourceSpaces, 3, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureSRVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureSRVResourceSpaces, 5, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureUAVResourceNames, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_prepare_inputs_pass_wave64_16bit_bb4c9ca013e1bdbb739ae4d5bb5cf78b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

