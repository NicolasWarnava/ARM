#include "BH1750.h"

I2C_HandleTypeDef *hi2c;  // change your handler here accordingly

#define BH1750_ADRESS 0x23
#define BH1750_INIT 0x01
#define BH1750_RESET 0x07
#define BH1750_H_MODE 0x10


uint8_t buffer[2];
uint8_t buffer_r[2];
uint8_t S_Adress;


HAL_StatusTypeDef BH1750_init(I2C_HandleTypeDef *hi2cUso, uint8_t SlaveAddress ){
	hi2c=hi2cUso;
	S_Adress = (SlaveAddress<<1);
	buffer[0]=0x01;
	return	HAL_I2C_Master_Transmit(hi2c, S_Adress, buffer, 1, 120);
}
HAL_StatusTypeDef BH1750_reset(){
	buffer[0]=0x07;
	return	HAL_I2C_Master_Transmit(hi2c, S_Adress, buffer, 1, 120);
}
HAL_StatusTypeDef BH1750_L_res(){
	buffer[0]=0x13;
	return	HAL_I2C_Master_Transmit(hi2c,S_Adress, buffer, 1, 120);
	HAL_Delay(130);
}
HAL_StatusTypeDef BH1750_H1_res(){
	buffer[0]=0x10;
	return HAL_I2C_Master_Transmit(hi2c,S_Adress, buffer, 1, 120);
	HAL_Delay(130);
}
HAL_StatusTypeDef BH1750_H2_res(){
	buffer[0]=0x11;
	return HAL_I2C_Master_Transmit(hi2c,S_Adress, buffer, 1, 120);
	HAL_Delay(130);
}
HAL_StatusTypeDef BH1750_get_lux(uint8_t *lux){

	HAL_StatusTypeDef status;

	//HAL_I2C_Master_Receive(hi2c, S_Adress, buffer_r, 2, 120);
	status = HAL_I2C_Master_Receive(hi2c, S_Adress, (uint8*)&lux, 2, 120);
	return status;
}
