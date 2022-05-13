#ifndef STM324XX_H
#define STM324XX_H

/* RCC Registers */
#define RCC_BASE_ADDR		0x40023800

/* GPIO Registers */
#define GPIOA_BASE_ADDR		0x40020000
#define GPIOB_BASE_ADDR		0x40020400
#define GPIOC_BASE_ADDR		0x40020800
#define GPIOD_BASE_ADDR		0x40020C00
#define GPIOE_BASE_ADDR		0x40021000
#define GPIOF_BASE_ADDR		0x40021400
#define GPIOG_BASE_ADDR		0x40021800
#define GPIOH_BASE_ADDR		0x40021C00
#define GPIOI_BASE_ADDR		0x40022000
#define GPIOJ_BASE_ADDR		0x40022400
#define GPIOK_BASE_ADDR		0x40022800

typedef struct
{
	unsigned int MODER;
	unsigned int OTYPER;
	unsigned int OSPEEDR;
	unsigned int PUPDR;
	unsigned int IDR;
	unsigned int ODR;
	unsigned int BSRR;
	unsigned int LCKR;
	unsigned int AFRL;
	unsigned int AFRH;
} GPIORegDef; 

GPIORegDef *GPIOD = (GPIORegDef *) GPIOD_BASE_ADDR;

typedef struct
{
	unsigned int CR;
	unsigned int PLLCFGR;
	unsigned int CFGR;
	unsigned int CIR;
	unsigned int AHB1RSTR;
	unsigned int AHB2RSTR;
	unsigned int AHB3RSTR;
	unsigned int : 32;
	unsigned int APB1RSTR;
	unsigned int APB2RSTR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1ENR;
	unsigned int AHB2ENR;
	unsigned int AHB3ENR;
	unsigned int : 32;
	unsigned int APB1ENR;
	unsigned int APB2ENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int AHB1LPENR;
	unsigned int AHB2LPENR;
	unsigned int AHB3LPENR;
	unsigned int : 32;
	unsigned int APB1LPENR;
	unsigned int APB2LPENR;
	unsigned int : 32;
	unsigned int : 32;
	unsigned int BDCR;
	unsigned int CSR;
	unsigned int : 32;
	unsigned int SSCGR;
	unsigned int PLLI2SCFGR;
} RCCRegDef;

RCCRegDef *RCC = (RCCRegDef *) RCC_BASE_ADDR;

#endif
