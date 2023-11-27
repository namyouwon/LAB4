/*
 * timer.c
 *
 *  Created on: Nov 17, 2022
 *      Author: DELL
 */


#include "timer.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim){
	if(htim->Instance == TIM2) {
		SCH_Update();
	}
}
