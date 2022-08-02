/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
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

#include "cycfg_peripherals.h"

const cy_stc_scb_i2c_config_t I2C_HPI_config = 
{
    .i2cMode = CY_SCB_I2C_SLAVE,
    .useRxFifo = true,
    .useTxFifo = true,
    .slaveAddress = 36,
    .slaveAddressMask = 254,
    .acceptAddrInFifo = false,
    .ackGeneralAddr = false,
    .enableWakeFromSleep = false,
    .enableDigitalFilter = false,
    .lowPhaseDutyCycle = 0,
    .highPhaseDutyCycle = 0,
    .delayInFifoAddress = 0,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t I2C_HPI_obj = 
    {
        .type = CYHAL_RSC_SCB,
        .block_num = 3U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)
cy_stc_usbpd_config_t mtb_usbpd_port0_config = 
{
    .vbusOvpConfig = NULL,
    .vbusUvpConfig = NULL,
    .vbusOcpConfig = NULL,
    .vbusScpConfig = NULL,
    .vbusRcpConfig = NULL,
    .vconnOcpConfig = NULL,
    .ccOvpConfig = NULL,
    .sbuOvpConfig = NULL,
    .legacyChargingConfig = NULL,
};


void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB3_CLOCK, CY_SYSCLK_DIV_8_BIT, 9U);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&I2C_HPI_obj);
#endif //defined (CY_USING_HAL)

    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_RX, CY_SYSCLK_DIV_8_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_TX, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_SAR, CY_SYSCLK_DIV_8_BIT, 5U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_REFGEN, CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_FILTER1, CY_SYSCLK_DIV_8_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_BCH_DET, CY_SYSCLK_DIV_8_BIT, 4U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_VBTR, CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_BB, CY_SYSCLK_DIV_8_BIT, 6U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_BB_SOFT, CY_SYSCLK_DIV_8_BIT, 7U);
    Cy_SysClk_PeriphAssignDivider(PCLK_USBPD0_CLOCK_IBTR, CY_SYSCLK_DIV_16_BIT, 1U);
}
