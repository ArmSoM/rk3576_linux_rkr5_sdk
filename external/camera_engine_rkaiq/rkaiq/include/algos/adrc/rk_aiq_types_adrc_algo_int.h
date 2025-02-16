/******************************************************************************
 *
 * Copyright 2019, Fuzhou Rockchip Electronics Co.Ltd . All rights reserved.
 * No part of this work may be reproduced, modified, distributed, transmitted,
 * transcribed, or translated into any language or computer format, in any form
 * or by any means without written permission of:
 * Fuzhou Rockchip Electronics Co.Ltd .
 *
 *
 *****************************************************************************/
#ifndef __RK_AIQ_TYPES_ADRC_ALGO_INT_H__
#define __RK_AIQ_TYPES_ADRC_ALGO_INT_H__

#include "iq_parser/RkAiqCalibDbTypes.h"
#include "iq_parser_v2/adrc_head.h"
#include "iq_parser_v2/adrc_uapi_head.h"

typedef struct adrc_blcRes_V32_s {
    bool blc_ob_enable;
    float isp_ob_predgain;
} adrc_blcRes_V32_t;

typedef enum drc_OpMode_s {
    DRC_OPMODE_AUTO   = 0,  // run auto drc
    DRC_OPMODE_MANUAL = 1,  // run manual drc
} drc_OpMode_t;

// drc attr V10
typedef struct drcAttrV10_s {
    rk_aiq_uapi_sync_t sync;

    drc_OpMode_t opMode;
    CalibDbV2_drc_V10_t stAuto;
    mdrcAttr_V10_t stManual;
    DrcInfoV10_t Info;
} drcAttrV10_t;

// drc attr V11
typedef struct drcAttrV11_s {
    rk_aiq_uapi_sync_t sync;

    drc_OpMode_t opMode;
    CalibDbV2_drc_V11_t stAuto;
    mdrcAttr_V11_t stManual;
    DrcInfoV11_t Info;
} drcAttrV11_t;

// drc attr V12
typedef struct drcAttrV12_s {
    rk_aiq_uapi_sync_t sync;

    drc_OpMode_t opMode;
    CalibDbV2_drc_V12_t stAuto;
    mdrcAttr_V12_t stManual;
    DrcInfoV12_t Info;
} drcAttrV12_t;

// drc attr V12 lite
typedef struct drcAttrV12Lite_s {
    rk_aiq_uapi_sync_t sync;

    drc_OpMode_t opMode;
    CalibDbV2_drc_v12_lite_t stAuto;
    mdrcAttr_v12_lite_t stManual;
    DrcInfoV12Lite_t Info;
} drcAttrV12Lite_t;

// drc attr V20
typedef struct drcAttrV20_s {
    rk_aiq_uapi_sync_t sync;

    drc_OpMode_t opMode;
    CalibDbV2_drc_V20_t stAuto;
    mdrcAttr_V20_t stManual;
    DrcInfoV20_t Info;
} drcAttrV20_t;

#endif
