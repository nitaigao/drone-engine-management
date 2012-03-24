#ifndef ENGINE_H
#define ENGINE_H

#include "Servo.h"

class Engine {
  
public:
  
  Engine(int pin);
  
  void init();
  
  void setThrottle(int percent);
  
  void reset();
  
  inline
  int pin() { return pin_; };
  
private:
  
  int pin_;
  Servo servo_;
  
};

#endif
