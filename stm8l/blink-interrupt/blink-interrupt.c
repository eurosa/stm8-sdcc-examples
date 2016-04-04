/****************************************/
/* Chip: STM8L051F3P6                   */
/****************************************/

#include <stdint.h>
#include <stm8l.h>

void TIM2_UPD_OVF_IRQHandler (void) __interrupt (19)
{
    // toggle GPIO pins
    PB_ODR ^= 0x02;
    PC_ODR ^= 0x10;

    // clear Bit 0 UIF: Update interrupt flag
    // otherwise it will fire again
    TIM2_SR1 &= 0xfe; // 0b11111110
}

void main(void)
{
    disableInterrupts();

    CLK_CKDIVR   = 0x04; // Set the frequency to 1 MHz
    CLK_PCKENR1 |= 0x01; // Enable clock to Timer2

    // Configure timer
    // Prescaler PSCR: There are only 3 bits available
    // 0b011 = 3 = 0x3: 2^3 = 8
    TIM2_PSCR = 0x3;

    // AutoReloadRegister (High Byte / Low Byte)
    // The ARRH has to been written first
    TIM2_ARRH = 0xff;
    TIM2_ARRL = 0xff;

    // Enable update interrupt
    TIM2_IER |= 0x01; //0b00000001

	// Enable timer
	TIM2_CR1 = 0x01;

	// Configure pin PB1 (11)
	PB_DDR = 0x02; // 0b00000010
	PB_CR1 = 0x02; // 0b00000010

   // Configure pin PC4 (18)
	PC_DDR = 0x10; // 0b00010000
	PC_CR1 = 0x10; // 0b00010000

    PC_ODR |= 0x10;
    PB_ODR |= 0x02;

    enableInterrupts();

	while (1)
	{
	    // wait for interrupt
	    wfi();
	}

}
