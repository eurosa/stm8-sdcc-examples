/* GPIO */
#define PA_ODR	        (*(volatile uint8_t *)0x5000)
#define PA_IDR	        (*(volatile uint8_t *)0x5001)
#define PA_DDR	        (*(volatile uint8_t *)0x5002)
#define PA_CR1	        (*(volatile uint8_t *)0x5003)
#define PA_CR2	        (*(volatile uint8_t *)0x5004)

#define PB_ODR	        (*(volatile uint8_t *)0x5005)
#define PB_IDR	        (*(volatile uint8_t *)0x5006)
#define PB_DDR	        (*(volatile uint8_t *)0x5007)
#define PB_CR1	        (*(volatile uint8_t *)0x5008)
#define PB_CR2	        (*(volatile uint8_t *)0x5009)

#define PC_ODR	        (*(volatile uint8_t *)0x500A)
#define PC_IDR	        (*(volatile uint8_t *)0x500B)
#define PC_DDR	        (*(volatile uint8_t *)0x500C)
#define PC_CR1	        (*(volatile uint8_t *)0x500D)
#define PC_CR2	        (*(volatile uint8_t *)0x500E)

#define PD_ODR	        (*(volatile uint8_t *)0x500F)
#define PD_IDR	        (*(volatile uint8_t *)0x5010)
#define PD_DDR	        (*(volatile uint8_t *)0x5011)
#define PD_CR1	        (*(volatile uint8_t *)0x5012)
#define PD_CR2	        (*(volatile uint8_t *)0x5013)

/* Clock */
#define CLK_CKDIVR	    (*(volatile uint8_t *)0x50C0)
#define CLK_CRTCR	    (*(volatile uint8_t *)0x50C1)
#define CLK_ICKCR	    (*(volatile uint8_t *)0x50C2)
#define CLK_PCKENR1	    (*(volatile uint8_t *)0x50C3)
#define CLK_PCKENR2	    (*(volatile uint8_t *)0x50C4)
#define CLK_CCOR	    (*(volatile uint8_t *)0x50C5)
#define CLK_ECKCR	    (*(volatile uint8_t *)0x50C6)
#define CLK_SCSR	    (*(volatile uint8_t *)0x50C7)
#define CLK_SWR	        (*(volatile uint8_t *)0x50C8)
#define CLK_SWCR	    (*(volatile uint8_t *)0x50C9)
#define CLK_CSSR	    (*(volatile uint8_t *)0x50CA)
#define CLK_CBEEPR	    (*(volatile uint8_t *)0x50CB)
#define CLK_HSICALR	    (*(volatile uint8_t *)0x50CC)
#define CLK_HSITRIMR	(*(volatile uint8_t *)0x50CD)
#define CLK_HSIUNLCKR	(*(volatile uint8_t *)0x50CE)
#define CLK_REGCSR	    (*(volatile uint8_t *)0x50CF)
#define CLK_PCKENR3	    (*(volatile uint8_t *)0x50D0)

/* USART */
#define USART1_SR	    (*(volatile uint8_t *)0x5230)
#define USART1_DR	    (*(volatile uint8_t *)0x5231)
#define USART1_BRR1	    (*(volatile uint8_t *)0x5232)
#define USART1_BRR2	    (*(volatile uint8_t *)0x5233)
#define USART1_CR1	    (*(volatile uint8_t *)0x5234)
#define USART1_CR2	    (*(volatile uint8_t *)0x5235)
#define USART1_CR3	    (*(volatile uint8_t *)0x5236)
#define USART1_CR4	    (*(volatile uint8_t *)0x5237)
#define USART1_CR5	    (*(volatile uint8_t *)0x5238)
#define USART1_GTR	    (*(volatile uint8_t *)0x5239)
#define USART1_PSCR	    (*(volatile uint8_t *)0x523A)

/* USART_SR Bits*/
#define USART_SR_TXE    (1 << 7)
#define USART_SR_TC     (1 << 6)
#define USART_SR_RXNE   (1 << 5)
#define USART_SR_IDLE   (1 << 4)
#define USART_SR_OR     (1 << 3)
#define USART_SR_NF     (1 << 2)
#define USART_SR_FE     (1 << 1)
#define USART_SR_PE     (1 << 0)



/* Timer TIM2 */
#define TIM2_CR1	    (*(volatile uint8_t *)0x5250)
#define TIM2_CR2	    (*(volatile uint8_t *)0x5251)
#define TIM2_SMCR	    (*(volatile uint8_t *)0x5252)
#define TIM2_ETR	    (*(volatile uint8_t *)0x5253)
#define TIM2_DER	    (*(volatile uint8_t *)0x5254)
#define TIM2_IER	    (*(volatile uint8_t *)0x5255)
#define TIM2_SR1	    (*(volatile uint8_t *)0x5256)
#define TIM2_SR2	    (*(volatile uint8_t *)0x5257)
#define TIM2_EGR	    (*(volatile uint8_t *)0x5258)
#define TIM2_CCMR1	    (*(volatile uint8_t *)0x5259)
#define TIM2_CCMR2	    (*(volatile uint8_t *)0x525A)
#define TIM2_CCER1	    (*(volatile uint8_t *)0x525B)
#define TIM2_CNTRH	    (*(volatile uint8_t *)0x525C)
#define TIM2_CNTRL	    (*(volatile uint8_t *)0x525D)
#define TIM2_PSCR	    (*(volatile uint8_t *)0x525E)
#define TIM2_ARRH	    (*(volatile uint8_t *)0x525F)
#define TIM2_ARRL	    (*(volatile uint8_t *)0x5260)
#define TIM2_CCR1H	    (*(volatile uint8_t *)0x5261)
#define TIM2_CCR1L	    (*(volatile uint8_t *)0x5262)
#define TIM2_CCR2H	    (*(volatile uint8_t *)0x5263)
#define TIM2_CCR2L	    (*(volatile uint8_t *)0x5264)
#define TIM2_BKR	    (*(volatile uint8_t *)0x5265)
#define TIM2_OISR	    (*(volatile uint8_t *)0x5266)

/* Timer TIM3 */
#define TIM3_CR1	    (*(volatile uint8_t *)0x5280)
#define TIM3_CR2	    (*(volatile uint8_t *)0x5281)
#define TIM3_SMCR	    (*(volatile uint8_t *)0x5282)
#define TIM3_ETR	    (*(volatile uint8_t *)0x5283)
#define TIM3_DER	    (*(volatile uint8_t *)0x5284)
#define TIM3_IER	    (*(volatile uint8_t *)0x5285)
#define TIM3_SR1	    (*(volatile uint8_t *)0x5286)
#define TIM3_SR2	    (*(volatile uint8_t *)0x5287)
#define TIM3_EGR	    (*(volatile uint8_t *)0x5288)
#define TIM3_CCMR1	    (*(volatile uint8_t *)0x5289)
#define TIM3_CCMR2	    (*(volatile uint8_t *)0x528A)
#define TIM3_CCER1	    (*(volatile uint8_t *)0x528B)
#define TIM3_CNTRH	    (*(volatile uint8_t *)0x528C)
#define TIM3_CNTRL	    (*(volatile uint8_t *)0x528D)
#define TIM3_PSCR	    (*(volatile uint8_t *)0x528E)
#define TIM3_ARRH	    (*(volatile uint8_t *)0x528F)
#define TIM3_ARRL	    (*(volatile uint8_t *)0x5290)
#define TIM3_CCR1H	    (*(volatile uint8_t *)0x5291)
#define TIM3_CCR1L	    (*(volatile uint8_t *)0x5292)
#define TIM3_CCR2H	    (*(volatile uint8_t *)0x5293)
#define TIM3_CCR2L	    (*(volatile uint8_t *)0x5294)
#define TIM3_BKR	    (*(volatile uint8_t *)0x5295)
#define TIM3_OISR	    (*(volatile uint8_t *)0x5296)

/* Timer TIM4 */
#define TIM4_CR1	    (*(volatile uint8_t *)0x52E0)
#define TIM4_CR2	    (*(volatile uint8_t *)0x52E1)
#define TIM4_SMCR	    (*(volatile uint8_t *)0x52E2)
#define TIM4_DER	    (*(volatile uint8_t *)0x52E3)
#define TIM4_IER	    (*(volatile uint8_t *)0x52E4)
#define TIM4_SR1	    (*(volatile uint8_t *)0x52E5)
#define TIM4_EGR	    (*(volatile uint8_t *)0x52E6)
#define TIM4_CNTR	    (*(volatile uint8_t *)0x52E7)
#define TIM4_PSCR	    (*(volatile uint8_t *)0x52E8)
#define TIM4_ARR	    (*(volatile uint8_t *)0x52E9)

/* Timer IRTIM */
#define IRTIM	        (*(volatile uint8_t *)0x52FF)

/* Macros */
#define enableInterrupts()    {__asm__("rim\n");}  /* enable interrupts */
#define disableInterrupts()   {__asm__("sim\n");}  /* disable interrupts */
#define rim()                 {__asm__("rim\n");}  /* enable interrupts */
#define sim()                 {__asm__("sim\n");}  /* disable interrupts */
#define nop()                 {__asm__("nop\n");}  /* No Operation */
#define trap()                {__asm__("trap\n");} /* Trap (soft IT) */
#define wfi()                 {__asm__("wfi\n");}  /* Wait For Interrupt */
#define halt()                {__asm__("halt\n");} /* Halt */
