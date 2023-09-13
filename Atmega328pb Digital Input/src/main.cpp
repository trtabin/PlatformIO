#include <avr/io.h>

int main()
{
  // Output Pin Setup
  DDRB |= (1<<DDB5);

  // Input Pin Setup and Pull-up resistor enable
  DDRD &= ~(1<<DDD3);
  PORTD |= (1<<DDD3);

  // Disable Pull-up resistro
  // PORTD &= ~(1<<DDD3);

  while(1)
  {
    if(PIND & (1<<PIND3))
    {
      PORTB |= (1<<PORTB5);
    }
    else
    {
      PORTB &= ~(1<<PORTB5);
    }
  }
}