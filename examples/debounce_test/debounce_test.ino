/*debouncing a button
	connect one end to an input pin and the other end to ground
	michael@ruck.com feb. 2015
*/
#include <debounce.h>

#define PIN_BUTTON 0
#define OUTPUT_BUTTON 13

DEBOUNCE button0(PIN_BUTTON,2); //Input Pin, debounce time ms(default 20)
DEBOUNCE button[2]={1,2};  //an array of buttons is als possible


void setup() {
  pinMode(OUTPUT_BUTTON, OUTPUT);
}

void loop() {
  //Get Button and debounce it
  digitalWrite(OUTPUT_BUTTON, button0);
}
