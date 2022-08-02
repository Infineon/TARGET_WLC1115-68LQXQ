/*******************************************************************************
* File Name: cycfg_pins.h
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"
#if defined (CY_USING_HAL)
    #include "cyhal_hwmgr.h"
#endif //defined (CY_USING_HAL)

#if defined(__cplusplus)
extern "C" {
#endif

#if defined (CY_USING_HAL)
    #define CYBSP_USER_LED (P1_1)
    #define CYBSP_USER_LED_BLUE CYBSP_USER_LED
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_USER_LED_RED (P1_2)
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define CYBSP_DEBUG_UART_TX (P1_4)
#endif //defined (CY_USING_HAL)
#define HPI_I2C_SDA_ENABLED 1U
#define CYBSP_SWDIO_ENABLED HPI_I2C_SDA_ENABLED
#define HPI_I2C_SDA_PORT GPIO_PRT3
#define CYBSP_SWDIO_PORT HPI_I2C_SDA_PORT
#define HPI_I2C_SDA_PORT_NUM 3U
#define CYBSP_SWDIO_PORT_NUM HPI_I2C_SDA_PORT_NUM
#define HPI_I2C_SDA_PIN 0U
#define CYBSP_SWDIO_PIN HPI_I2C_SDA_PIN
#define HPI_I2C_SDA_NUM 0U
#define CYBSP_SWDIO_NUM HPI_I2C_SDA_NUM
#define HPI_I2C_SDA_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define CYBSP_SWDIO_DRIVEMODE HPI_I2C_SDA_DRIVEMODE
#define HPI_I2C_SDA_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE HPI_I2C_SDA_INIT_DRIVESTATE
#ifndef ioss_0_port_3_pin_0_HSIOM
    #define ioss_0_port_3_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define HPI_I2C_SDA_HSIOM ioss_0_port_3_pin_0_HSIOM
#define CYBSP_SWDIO_HSIOM HPI_I2C_SDA_HSIOM
#define HPI_I2C_SDA_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWDIO_IRQ HPI_I2C_SDA_IRQ
#if defined (CY_USING_HAL)
    #define HPI_I2C_SDA_HAL_PORT_PIN P3_0
    #define CYBSP_SWDIO_HAL_PORT_PIN HPI_I2C_SDA_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SDA P3_0
    #define CYBSP_SWDIO HPI_I2C_SDA
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SDA_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDIO_HAL_IRQ HPI_I2C_SDA_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SDA_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDIO_HAL_DIR HPI_I2C_SDA_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SDA_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
    #define CYBSP_SWDIO_HAL_DRIVEMODE HPI_I2C_SDA_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)
#define HPI_I2C_SCL_ENABLED 1U
#define CYBSP_SWDCK_ENABLED HPI_I2C_SCL_ENABLED
#define HPI_I2C_SCL_PORT GPIO_PRT3
#define CYBSP_SWDCK_PORT HPI_I2C_SCL_PORT
#define HPI_I2C_SCL_PORT_NUM 3U
#define CYBSP_SWDCK_PORT_NUM HPI_I2C_SCL_PORT_NUM
#define HPI_I2C_SCL_PIN 1U
#define CYBSP_SWDCK_PIN HPI_I2C_SCL_PIN
#define HPI_I2C_SCL_NUM 1U
#define CYBSP_SWDCK_NUM HPI_I2C_SCL_NUM
#define HPI_I2C_SCL_DRIVEMODE CY_GPIO_DM_OD_DRIVESLOW
#define CYBSP_SWDCK_DRIVEMODE HPI_I2C_SCL_DRIVEMODE
#define HPI_I2C_SCL_INIT_DRIVESTATE 1
#define CYBSP_SWDCK_INIT_DRIVESTATE HPI_I2C_SCL_INIT_DRIVESTATE
#ifndef ioss_0_port_3_pin_1_HSIOM
    #define ioss_0_port_3_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define HPI_I2C_SCL_HSIOM ioss_0_port_3_pin_1_HSIOM
#define CYBSP_SWDCK_HSIOM HPI_I2C_SCL_HSIOM
#define HPI_I2C_SCL_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWDCK_IRQ HPI_I2C_SCL_IRQ
#if defined (CY_USING_HAL)
    #define HPI_I2C_SCL_HAL_PORT_PIN P3_1
    #define CYBSP_SWDCK_HAL_PORT_PIN HPI_I2C_SCL_HAL_PORT_PIN
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SCL P3_1
    #define CYBSP_SWDCK HPI_I2C_SCL
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SCL_HAL_IRQ CYHAL_GPIO_IRQ_NONE
    #define CYBSP_SWDCK_HAL_IRQ HPI_I2C_SCL_HAL_IRQ
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SCL_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
    #define CYBSP_SWDCK_HAL_DIR HPI_I2C_SCL_HAL_DIR
#endif //defined (CY_USING_HAL)
#if defined (CY_USING_HAL)
    #define HPI_I2C_SCL_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_OPENDRAINDRIVESLOW
    #define CYBSP_SWDCK_HAL_DRIVEMODE HPI_I2C_SCL_HAL_DRIVEMODE
#endif //defined (CY_USING_HAL)

extern const cy_stc_gpio_pin_config_t HPI_I2C_SDA_config;
#define CYBSP_SWDIO_config HPI_I2C_SDA_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t HPI_I2C_SDA_obj;
    #define CYBSP_SWDIO_obj HPI_I2C_SDA_obj
#endif //defined (CY_USING_HAL)
extern const cy_stc_gpio_pin_config_t HPI_I2C_SCL_config;
#define CYBSP_SWDCK_config HPI_I2C_SCL_config
#if defined (CY_USING_HAL)
    extern const cyhal_resource_inst_t HPI_I2C_SCL_obj;
    #define CYBSP_SWDCK_obj HPI_I2C_SCL_obj
#endif //defined (CY_USING_HAL)

void init_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif


#endif /* CYCFG_PINS_H */
