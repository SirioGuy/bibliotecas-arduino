#ifndef LED_H
#define LED_H

class Led{
  public:
    Led(int pin);

    void begin();
    void parpadear();
  private:
    int pin;
};

#endif