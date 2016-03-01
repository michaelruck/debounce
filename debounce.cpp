#include "debounce.h"

DEBOUNCE::DEBOUNCE(uint8_t inputPin, uint16_t bounce_duration){
	_pin=inputPin;
	_bounce_duration=bounce_duration;
	pinMode(_pin, INPUT_PULLUP);
}

DEBOUNCE::~DEBOUNCE(){
	//nothing
}

uint8_t DEBOUNCE::read(){
  uint8_t button_state;//, button;
  static uint8_t button_state_old, button=HIGH;
  unsigned long time;
  static unsigned long time_old;
  
  button_state = digitalRead(_pin);
  time = millis();
  if ((button_state != button_state_old) & (time > time_old + _bounce_duration)) {
    //Button changed
    button = button_state;
    time_old = time;
  }
  button_state_old = button_state;
  return button;
}
