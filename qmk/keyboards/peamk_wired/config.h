// You shouldn't need to edit any of this.

#pragma once

#include "keyboards/peamk_wired/vik/config.vik.pre.h"

#define EE_HANDS

#define VIK_SPI_DRIVER   SPID1
#define VIK_SPI_SCK_PIN  GP14
#define VIK_SPI_MOSI_PIN GP15
#define VIK_SPI_MISO_PIN GP12
#define VIK_SPI_CS       GP13
#define VIK_I2C_DRIVER   I2CD1
#define VIK_I2C_SDA_PIN  GP18
#define VIK_I2C_SCL_PIN  GP19
#define VIK_GPIO_1       GP26
#define VIK_GPIO_2       GP27
#define VIK_WS2812_DI_PIN GP2

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

#include "keyboards/peamk_wired/vik/config.vik.post.h"
