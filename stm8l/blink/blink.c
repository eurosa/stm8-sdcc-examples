/****************************************/
/* Chip: STM8L051F3P6                   */
/****************************************/

#include <stdint.h>
#include <stm8l.h>

unsigned int i;

void main(void)
{
    CLK_CKDIVR   = 0x04; // Set the frequency to 1 MHz

	// Configure pin PB1 (11)
	PB_DDR = 0x02; // 0b00000010
	PB_CR1 = 0x02; // 0b00000010

   // Configure pin PC4 (18)
	PC_DDR = 0x10; // 0b00010000
	PC_CR1 = 0x10; // 0b00010000

    PC_ODR |= 0x10;
    PB_ODR |= 0x02;

	for(;;)
	{
      // Toggle pin with XOR
      // If PB_ODR_BIT_1 is high:
      //   0b00000010 ^ 0b00000010 = 0b00000000
      // If PB_ODR_BIT_1 is low:
      //   0b00000000 ^ 0b00000010 = 0b00000010
      PB_ODR ^= 0x02;
      PC_ODR ^= 0x10;

      // Waste some time...
      for (i=0; i < 65535; i++) { }
	}
}
