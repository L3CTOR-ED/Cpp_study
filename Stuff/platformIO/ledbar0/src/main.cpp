#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  DDRB= 0xFF; // направление, как работает на вход или выход 
  DDRD= 0x0;  // 
  PORTD=0xFF; // Даем питание 

}
// задание: модифицировать кнопки так чтобы сигнал был прерываемым 
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
