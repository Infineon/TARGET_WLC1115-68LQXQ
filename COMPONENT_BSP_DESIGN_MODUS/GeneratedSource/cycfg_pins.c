/*******************************************************************************
* File Name: cycfg_pins.c
*
* Description:
* Pin configuration
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t HPI_I2C_SDA_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = HPI_I2C_SDA_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t HPI_I2C_SDA_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = HPI_I2C_SDA_PORT_NUM,
        .channel_num = HPI_I2C_SDA_PIN,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_gpio_pin_config_t HPI_I2C_SCL_config = 
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_OD_DRIVESLOW,
    .hsiom = HPI_I2C_SCL_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
    .vregEn = 0UL,
    .ibufMode = 0UL,
    .vtripSel = 0UL,
    .vrefSel = 0UL,
    .vohSel = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t HPI_I2C_SCL_obj = 
    {
        .type = CYHAL_RSC_GPIO,
        .block_num = HPI_I2C_SCL_PORT_NUM,
        .channel_num = HPI_I2C_SCL_PIN,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(HPI_I2C_SDA_PORT, HPI_I2C_SDA_PIN, &HPI_I2C_SDA_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&HPI_I2C_SDA_obj);
#endif //defined (CY_USING_HAL)

    Cy_GPIO_Pin_Init(HPI_I2C_SCL_PORT, HPI_I2C_SCL_PIN, &HPI_I2C_SCL_config);
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&HPI_I2C_SCL_obj);
#endif //defined (CY_USING_HAL)
}
