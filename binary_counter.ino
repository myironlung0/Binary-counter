/*
BINARY COUNTER
This project uses 4 LEDs to display binary numbers from 0 to 15.
Each LED represents one bit.
*/

const byte ledPins[] = { 2, 4, 6, 8 };
byte liczba = 0;

void setup() {
  delay(3000);
  for(byte i=0; i<4; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for(byte i=0; i<16; i++){
    showBinary(i);
    delay(1000);
  }

}

//function that displays a number in binary
void showBinary(byte liczba){
  byte buf;
  //check each bit of the number
  for(byte i=0; i<4; i++){
    buf = liczba & (1 << i);
    if(buf > 0){
      digitalWrite(ledPins[i], HIGH);
    }else{
      digitalWrite(ledPins[i], LOW);
    }
  }
}
