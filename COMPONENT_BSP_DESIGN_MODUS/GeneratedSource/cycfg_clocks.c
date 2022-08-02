/*******************************************************************************
* File Name: cycfg_clocks.c
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

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_VBTR_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_VBTR_DIV_HW,
        .channel_num = USBPD_VBTR_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_IBTR_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_IBTR_DIV_HW,
        .channel_num = USBPD_IBTR_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t peri_0_div_16_2_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = peri_0_div_16_2_HW,
        .channel_num = peri_0_div_16_2_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t peri_0_div_16_3_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = peri_0_div_16_3_HW,
        .channel_num = peri_0_div_16_3_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_TX_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_TX_DIV_HW,
        .channel_num = USBPD_TX_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_RX_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_RX_DIV_HW,
        .channel_num = USBPD_RX_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_REFGEN_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_REFGEN_DIV_HW,
        .channel_num = USBPD_REFGEN_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_FILT1_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_FILT1_DIV_HW,
        .channel_num = USBPD_FILT1_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_BCH_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_BCH_DIV_HW,
        .channel_num = USBPD_BCH_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_SAR_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_SAR_DIV_HW,
        .channel_num = USBPD_SAR_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_BB_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_BB_DIV_HW,
        .channel_num = USBPD_BB_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t USBPD_BB_SOFT_DIV_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = USBPD_BB_SOFT_DIV_HW,
        .channel_num = USBPD_BB_SOFT_DIV_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t peri_0_div_8_8_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = peri_0_div_8_8_HW,
        .channel_num = peri_0_div_8_8_NUM,
    };
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t peri_0_div_8_9_obj = 
    {
        .type = CYHAL_RSC_CLOCK,
        .block_num = peri_0_div_8_9_HW,
        .channel_num = peri_0_div_8_9_NUM,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_clocks(void)
{
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 0U, 23999U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_VBTR_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 1U, 23999U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_IBTR_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 2U, 5U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 2U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&peri_0_div_16_2_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 3U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 3U, 2U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 3U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&peri_0_div_16_3_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 0U, 79U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 0U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_TX_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 1U, 3U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 1U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_RX_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 2U, 0U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 2U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_REFGEN_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 3U, 23U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 3U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_FILT1_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 4U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 4U, 47U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 4U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_BCH_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 5U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 5U, 47U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 5U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_SAR_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 6U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 6U, 1U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 6U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_BB_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 7U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 7U, 47U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 7U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&USBPD_BB_SOFT_DIV_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 8U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 8U, 51U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 8U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&peri_0_div_8_8_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_8_BIT, 9U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_8_BIT, 9U, 3U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_8_BIT, 9U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&peri_0_div_8_9_obj);
#endif //defined (CY_USING_HAL)
}
