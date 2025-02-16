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

#ifndef _RK_AIQ_USER_API2_AMERGE_H_
#define _RK_AIQ_USER_API2_AMERGE_H_

#include "algos/amerge/rk_aiq_uapi_amerge_int.h"
#include "iq_parser_v2/amerge_uapi_compact.h"

#ifndef RK_AIQ_SYS_CTX_T
#define RK_AIQ_SYS_CTX_T
typedef struct rk_aiq_sys_ctx_s rk_aiq_sys_ctx_t;
#endif

RKAIQ_BEGIN_DECLARE

XCamReturn rk_aiq_user_api2_amerge_SetAttrib(const rk_aiq_sys_ctx_t* sys_ctx, amerge_attrib_t attr);
XCamReturn rk_aiq_user_api2_amerge_GetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                             amerge_attrib_t* attr);

XCamReturn rk_aiq_user_api2_amerge_v10_SetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                                 const mergeAttrV10_t* attr);
XCamReturn rk_aiq_user_api2_amerge_v10_GetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                                 mergeAttrV10_t* attr);
XCamReturn rk_aiq_user_api2_amerge_v11_SetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                                 const mergeAttrV11_t* attr);
XCamReturn rk_aiq_user_api2_amerge_v11_GetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                                 mergeAttrV11_t* attr);
XCamReturn rk_aiq_user_api2_amerge_v12_SetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                                 const mergeAttrV12_t* attr);
XCamReturn rk_aiq_user_api2_amerge_v12_GetAttrib(const rk_aiq_sys_ctx_t* sys_ctx,
                                                 mergeAttrV12_t* attr);

RKAIQ_END_DECLARE

#endif
