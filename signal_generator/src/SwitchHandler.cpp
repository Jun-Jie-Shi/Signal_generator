/*
 * SwitchHandler.cpp
 *
 *  Created on: 2021��5��31��
 *      Author: win10
 */
#include "include.hpp"
void SwitchHandler()
{
	//xil_printf("The program is running.\n");
    Xil_Out32(XPAR_AXI_GPIO_0_BASEADDR+XGPIO_DATA2_OFFSET,Xil_In32(XPAR_AXI_GPIO_0_BASEADDR+XGPIO_DATA_OFFSET));
    Xil_Out32(XPAR_AXI_GPIO_0_BASEADDR+XGPIO_ISR_OFFSET,Xil_In32(XPAR_AXI_GPIO_0_BASEADDR+XGPIO_ISR_OFFSET));
}
