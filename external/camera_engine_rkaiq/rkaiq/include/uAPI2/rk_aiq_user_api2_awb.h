/*
 *  Copyright (c) 2019 Rockchip Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef _RK_AIQ_USER_API2_AWB_H_
#define _RK_AIQ_USER_API2_AWB_H_
#include "algos/awb/rk_aiq_uapi_awb_int.h"

#ifndef RK_AIQ_SYS_CTX_T
#define RK_AIQ_SYS_CTX_T
typedef struct rk_aiq_sys_ctx_s rk_aiq_sys_ctx_t;
#endif

RKAIQ_BEGIN_DECLARE
//#if ISP_HW_V21
XCamReturn
rk_aiq_user_api2_awbV21_SetAllAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV21_attrib_t attr);
XCamReturn
rk_aiq_user_api2_awbV21_GetAllAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV21_attrib_t *attr);
XCamReturn
rk_aiq_user_api2_awb_SetWbGainAdjustAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_wbGainAdjust_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetWbGainAdjustAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_wbGainAdjust_t *attr);
XCamReturn
rk_aiq_user_api2_awb_SetMultiWindowAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_mulWindow_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetMultiWindowAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_mulWindow_t *attr);

//#elif ISP_HW_V30
XCamReturn
rk_aiq_user_api2_awbV30_SetAllAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV30_attrib_t attr);
XCamReturn
rk_aiq_user_api2_awbV30_GetAllAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV30_attrib_t *attr);
XCamReturn
rk_aiq_user_api2_awb_SetWbGainAdjustAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_wbGainAdjust_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetWbGainAdjustAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_wbGainAdjust_t *attr);
XCamReturn
rk_aiq_user_api2_awb_SetMultiWindowAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_mulWindow_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetMultiWindowAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_mulWindow_t *attr);

//#elif (ISP_HW_V32||ISP_HW_V32_LITE)
XCamReturn
rk_aiq_user_api2_awbV32_SetAllAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV32_attrib_t attr);
XCamReturn
rk_aiq_user_api2_awbV32_GetAllAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV32_attrib_t *attr);
XCamReturn
rk_aiq_user_api2_awbV32_SetMultiWindowAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV32_awb_mulWindow_t attr);
XCamReturn
rk_aiq_user_api2_awbV32_GetMultiWindowAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wbV32_awb_mulWindow_t *attr);
XCamReturn
rk_aiq_user_api2_awbV32_SetIQAutoExtPara(const rk_aiq_sys_ctx_t* sys_ctx, const rk_aiq_uapiV2_Wb_Awb_IqAtExtPa_V32_t* attr);
XCamReturn
rk_aiq_user_api2_awbV32_GetIQAutoExtPara(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_Wb_Awb_IqAtExtPa_V32_t *attr);
XCamReturn
rk_aiq_user_api2_awbV32_SetIQAutoPara(const rk_aiq_sys_ctx_t* sys_ctx, const rk_aiq_uapiV2_Wb_Awb_IqAtPa_V32_t* attr);
XCamReturn
rk_aiq_user_api2_awbV32_GetIQAutoPara(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_Wb_Awb_IqAtPa_V32_t *attr);
XCamReturn
rk_aiq_user_api2_awb_setAwbPreWbgain(const rk_aiq_sys_ctx_t* sys_ctx,  const float att[4]);
XCamReturn
rk_aiq_user_api2_awb_IqMap2Main(const rk_aiq_sys_ctx_t* sys_ctx,  rk_aiq_uapiV2_awb_Slave2Main_Cfg_t att);
//#endif


#//if ISP_HW_V32||ISP_HW_V32_LITE||ISP_HW_V21||ISP_HW_V30
XCamReturn
rk_aiq_user_api2_awb_GetCCT(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_wb_cct_t *cct);
XCamReturn
rk_aiq_user_api2_awb_QueryWBInfo(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_wb_querry_info_t *wb_querry_info);
XCamReturn
rk_aiq_user_api2_awb_Lock(const rk_aiq_sys_ctx_t* sys_ctx);
XCamReturn
rk_aiq_user_api2_awb_Unlock(const rk_aiq_sys_ctx_t* sys_ctx);
XCamReturn
rk_aiq_user_api2_awb_SetWpModeAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_opMode_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetWpModeAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_opMode_t *attr);
XCamReturn
rk_aiq_user_api2_awb_SetMwbAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_wb_mwb_attrib_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetMwbAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_wb_mwb_attrib_t *attr);
XCamReturn
rk_aiq_user_api2_awb_SetWbGainOffsetAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_wbGainOffset_t attr);
XCamReturn
rk_aiq_user_api2_awb_GetWbGainOffsetAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_wb_awb_wbGainOffset_t *attr);
XCamReturn
rk_aiq_user_api2_awb_getStrategyResult(const rk_aiq_sys_ctx_t* sys_ctx, rk_tool_awb_strategy_result_t *attr);
XCamReturn
rk_aiq_user_api2_awb_getAlgoSta(const rk_aiq_sys_ctx_t* sys_ctx, rk_tool_awb_stat_res_full_t *attr);
XCamReturn
rk_aiq_user_api2_awb_WriteAwbIn(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_awb_wrtIn_attr_t attr);
XCamReturn
rk_aiq_user_api2_awb_SetFFWbgainAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_uapiV2_awb_ffwbgain_attr_t attr);
XCamReturn
rk_aiq_user_api2_awb_freeConvertLut(rk_aiq_uapiV2_awb_Gain_Lut_Cfg_t *gain_lut_cfg);
XCamReturn
rk_aiq_user_api2_awb_loadConvertLut(rk_aiq_uapiV2_awb_Gain_Lut_Cfg_t *gain_lut_cfg, char *fullfile);
XCamReturn
rk_aiq_user_api2_awb_wbgainConvert2(rk_aiq_wb_gain_t  wbGainIn, rk_aiq_uapiV2_awb_Gain_Lut_Cfg_t *gain_lut_cfg, rk_aiq_wb_gain_t  *wbGainOut);
//#endif




RKAIQ_END_DECLARE

#endif
