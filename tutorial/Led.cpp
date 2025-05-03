#include "Led.h"
#include "Arduino.h"

Led::Led(int pin){
  this->pin = pin;  // this->
}

void Led::begin(){
  pinMode(pin, OUTPUT);
}

void Led::parpadear(){
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}