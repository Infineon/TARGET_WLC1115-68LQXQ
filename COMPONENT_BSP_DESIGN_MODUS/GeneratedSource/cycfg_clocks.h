/*******************************************************************************
* File Name: cycfg_clocks.h
*
* Description:
* Clock configuration
* This file was automatically generated and should not be modified.
* Tools Package 2.4.0.6014
* mtb-pdl-cat2 1.6.0.7078
* personalities 6.0.0.0
* udd 3.0.0.2050
*
********************************************************************************
* Copyright 2022 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#if !defined(CYCFG_CLOCKS_H)
#define CYCFG_CLOCKS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#define USBPD_VBTR_DIV_ENABLED 1U
#define USBPD_VBTR_DIV_HW CY_SYSCLK_DIV_16_BIT
#define USBPD_VBTR_DIV_NUM 0U
#define USBPD_IBTR_DIV_ENABLED 1U
#define USBPD_IBTR_DIV_HW CY_SYSCLK_DIV_16_BIT
#define USBPD_IBTR_DIV_NUM 1U
#define peri_0_div_16_2_ENABLED 1U
#define peri_0_div_16_2_HW CY_SYSCLK_DIV_16_BIT
#define peri_0_div_16_2_NUM 2U
#define peri_0_div_16_3_ENABLED 1U
#define peri_0_div_16_3_HW CY_SYSCLK_DIV_16_BIT
#define peri_0_div_16_3_NUM 3U
#define USBPD_TX_DIV_ENABLED 1U
#define USBPD_TX_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_TX_DIV_NUM 0U
#define USBPD_RX_DIV_ENABLED 1U
#define USBPD_RX_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_RX_DIV_NUM 1U
#define USBPD_REFGEN_DIV_ENABLED 1U
#define USBPD_REFGEN_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_REFGEN_DIV_NUM 2U
#define USBPD_FILT1_DIV_ENABLED 1U
#define USBPD_FILT1_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_FILT1_DIV_NUM 3U
#define USBPD_BCH_DIV_ENABLED 1U
#define USBPD_BCH_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_BCH_DIV_NUM 4U
#define USBPD_SAR_DIV_ENABLED 1U
#define USBPD_SAR_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_SAR_DIV_NUM 5U
#define USBPD_BB_DIV_ENABLED 1U
#define USBPD_BB_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_BB_DIV_NUM 6U
#define USBPD_BB_SOFT_DIV_ENABLED 1U
#define USBPD_BB_SOFT_DIV_HW CY_SYSCLK_DIV_8_BIT
#define USBPD_BB_SOFT_DIV_NUM 7U
#define peri_0_div_8_8_ENABLED 1U
#define peri_0_div_8_8_HW CY_SYSCLK_DIV_8_BIT
#define peri_0_div_8_8_NUM 8U
#define peri_0_div_8_9_ENABLED 1U
#define peri_0_div_8_9_HW CY_SYSCLK_DIV_8_BIT
#define peri_0_div_8_9_NUM 9U

#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_VBTR_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_IBTR_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t peri_0_div_16_2_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t peri_0_div_16_3_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_TX_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_RX_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_REFGEN_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_FILT1_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_BCH_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_SAR_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_BB_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t USBPD_BB_SOFT_DIV_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t peri_0_div_8_8_obj;
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t peri_0_div_8_9_obj;
#endif //defined (CY_USING_HAL)

void init_cycfg_clocks(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_CLOCKS_H */
