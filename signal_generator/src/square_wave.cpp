#include "include.hpp"

const int counter0_initial = 144;

void square_wave(int &volt,int &edge,int &counter,int &freq_change,int &volt_set,int &blank)
{
	const int counter_max = counter0_initial * 100 / freq_change;
/*	if(counter >= counter_max)
	{
		if(edge == 1)
			edge = 0;
		else
			edge = 1;
		counter = 0;
	}
	if(edge == 0)
		volt = 4095 * volt_set/340;
	else
		volt = 0;*/
	if(counter <= ((counter_max*2*blank)/100))
		volt = 4095 * volt_set/340;
	else if(counter >= counter_max*2 )
		counter = 0;
	else
		volt = 0;
	counter++;
	Xil_Out16(XPAR_AXI_QUAD_SPI_0_BASEADDR+XSP_DTR_OFFSET,volt&0xfff);//启动SPI传输，产生时钟和片选信号
}
