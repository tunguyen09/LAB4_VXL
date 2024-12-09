/*
 * led.c
 *
 *  Created on: Dec 7, 2022
 *      Author: trong
 */

#include "main.h"
#include "led.h"

void blink_GREEN(void) {
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
}

void blink_AQUA(void) {
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
}

void blink_PINK(void) {
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
}

void blink_RED(void) {
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
}

void blink_YELLOW(void) {
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
}

