// 假设所有指定的输入口都是 GPIO E
#include "stm32f1xx_hal.h"
unsigned char *Seek_GPIO(unsigned char *Regested_Inputs) {
  if (!HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_4)) {
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, 0);
  } else {
    HAL_GPIO_WritePin(GPIOE, GPIO_PIN_5, 1);   
  }
  return Regested_Inputs;
};
