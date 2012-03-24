#include "engine.h"
 
Engine::Engine(int pin) : pin_(pin) {
  
}

void Engine::init() {
  servo_.attach(pin_);
}

void Engine::setThrottle(int percent) {
  int angle = (percent / 100.0f) * 180;
  servo_.write(angle);
}

void Engine::reset() {
  servo_.detach();
}