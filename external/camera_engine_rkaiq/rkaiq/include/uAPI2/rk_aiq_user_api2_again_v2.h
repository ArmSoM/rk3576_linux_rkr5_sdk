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

#ifndef _RK_AIQ_USER_API2_AGAINV2_H_
#define _RK_AIQ_USER_API2_AGAINV2_H_

#include "algos/again2/rk_aiq_types_again_algo_int_v2.h"

#ifndef RK_AIQ_SYS_CTX_T
#define RK_AIQ_SYS_CTX_T
typedef struct rk_aiq_sys_ctx_s rk_aiq_sys_ctx_t;
#endif

RKAIQ_BEGIN_DECLARE

XCamReturn
rk_aiq_user_api2_againV2_SetAttrib(const rk_aiq_sys_ctx_t* sys_ctx, const rk_aiq_gain_attrib_v2_t* attr);

XCamReturn
rk_aiq_user_api2_againV2_GetAttrib(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_gain_attrib_v2_t* attr);

XCamReturn
rk_aiq_user_api2_againV2_GetInfo(const rk_aiq_sys_ctx_t* sys_ctx, rk_aiq_gain_info_v2_t* pInfo);

XCamReturn
rk_aiq_user_api2_againV2_WriteInput(const rk_aiq_sys_ctx_t* sys_ctx, const rk_aiq_uapiV2_again_wrtIn_attr_t* attr,
                                 bool need_sync);
RKAIQ_END_DECLARE

#endif
