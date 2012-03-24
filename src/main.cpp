#include <WProgram.h>

#include "engine.h"

const int numEngines = 2;
Engine engines[numEngines] = {10, 11}; // pins 10, 11

void calibrateEngines() {
  delay(5000);
  
  Serial.println("Setting Throttle Range");
  
  // set the throttle range for each engine
  for (int i = 0; i < numEngines; i++) {
    engines[i].init();
    engines[i].setThrottle(100);
  }
  
  delay(1000);
  
  for (int i = 0; i < numEngines; i++) {
    engines[i].setThrottle(0);
  }

  delay(1000);
  
  for (int i = 0; i < numEngines; i++) {
    engines[i].reset();
  }
  
  delay(1000);
  
  Serial.println("Throttle Range Calibrated");    
}

void normalInit() {
   // set the throttle range for each engine
   for (int i = 0; i < numEngines; i++) {
     engines[i].init();
   }
}

void setup() {
  Serial.begin(115200);
  
  // instructions
  
  // comment in calibrateEngines
  // comment out normalInit();    
  
  // make sure the 5v power is connected to all esc's
  // compile and upload the program
  // switch on main power
  // wait for a long beep
  
  // comment out calibrateEngines
  // comment in normalInit();  
  
  // calibrateEngines();
  normalInit();
};

void loop() {
  for (int i = 0; i < numEngines; i++) {
    engines[i].setThrottle(30);
  }  
};
