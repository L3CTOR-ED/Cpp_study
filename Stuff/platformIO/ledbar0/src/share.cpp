#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  DDRB= 0xFF;  
  DDRD= 0x0;   
  PORTD=0xFF; 

}

void loop() {
  // put your main code here, to run repeatedly:
 // PORTB=PIND; с помощью этой команды говорим что порты В работают от того какие пины D работают
  // delay(500);

  uint8_t inputState = PIND & 0x7F;

  if (inputState > 0) {
    PORTB = inputState;
    delay(500);
    PORTB = 0x00;
    delay(500);
  }
  
}
