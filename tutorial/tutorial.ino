/*
*   Tutorial de Bibliotecas
*   by Hamtronics Lab
*/
#include "Led.h"

Led led(13);

void setup(){
  led.begin();
}

void loop(){
  led.parpadear();
}

