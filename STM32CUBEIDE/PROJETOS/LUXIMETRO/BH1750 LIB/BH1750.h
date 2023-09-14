#include "stm32f4xx_hal.h"

#ifndef __BH1750
#define __BH1750
HAL_StatusTypeDef BH1750_init(I2C_HandleTypeDef *hi2cUso, uint8_t SlaveAddress );
HAL_StatusTypeDef BH1750_reset();
HAL_StatusTypeDef BH1750_L_res();
HAL_StatusTypeDef BH1750_H1_res();
HAL_StatusTypeDef BH1750_H2_res();
HAL_StatusTypeDef BH1750_get_lux(uint8_t *lux);
#endif __BH1750