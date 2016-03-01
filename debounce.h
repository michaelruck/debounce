/*debouncing a button
	connect one end to an input pin and the other end to ground
	michael@ruck.com feb. 2015
*/
#ifndef DEBOUNCE_H
#define DEBOUNCE_H
#include <Arduino.h>

class DEBOUNCE{
	public:
		DEBOUNCE(uint8_t inputPin, uint16_t bounce_duration=20);
		~DEBOUNCE();
		uint8_t read();
		
		operator uint8_t() {
			return read();
		};
	private:
		uint8_t _pin;
		uint16_t _bounce_duration;
};
#endif