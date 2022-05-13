#include "stm32f4xx.h"
#include "gpio.h"
//#define GPIOA

static void toggle_led(void)
{
    //int B=0;
    int n=0;
	volatile long m;
	int delay = 0xFFFFFFF;
	int delay_orange = 0x5FFFFFF;
	int delay_blue = 0x25FFFFF;
	//if( ( GPIOA->IDR & 0x01) == 0 )
  	//{
      //Turn ON the LEDs
    //  B=1;
   // }

if(1==1)
{
 for(n=0;n<5;n++)
 {
	GPIOD->ODR = GPIOD->ODR | (1 << 12);
	for (m = delay; m--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 12);
	for (m = delay; m--; );
 }
 for(n=0;n<5;n++)
 {
	GPIOD->ODR = GPIOD->ODR | (1 << 14);
	for (m = delay; m--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 14);
	for (m = delay; m--; );
}
for(n=0;n<5;n++)
{
	GPIOD->ODR = GPIOD->ODR | (1 << 13);
	for (m = delay_orange; m--; );


	GPIOD->ODR = GPIOD->ODR & ~(1 << 13);
	for (m = delay_orange; m--; );
}
for(n=0;n<5;n++)
{
	GPIOD->ODR = GPIOD->ODR | (1 << 15);
	for (m = delay_blue; m--; );

	GPIOD->ODR = GPIOD->ODR & ~(1 << 15);
	for (m = delay_blue; m--; );
}
}
//#else
//	GPIOD->BSRR = (1 << 28);
//	for (m = 0xFFFFFFF; m--; );
//	GPIOD->BSRR = (1 << 12);
//	for (m = 0xFFFFFFF; m--; );
//#endif

}

static void init_config(void)
{
	/* Enable the GPIO Clock */
	RCC->AHB1ENR = RCC->AHB1ENR | 0x00000008;
	
	/* Setting PD12 (Pin 12 of PORTD) as General Purpose Output */
	GPIOD->MODER = GPIOD->MODER | 0x01000000;
	GPIOD->MODER = GPIOD->MODER | 0x11000000;//14
	GPIOD->MODER = GPIOD->MODER | 0x04000000;//oange
	GPIOD->MODER = GPIOD->MODER | 0x40000000;//blue
}

int main(void)
{
	init_config();

	while (1)
	{
		toggle_led();
	}
}
