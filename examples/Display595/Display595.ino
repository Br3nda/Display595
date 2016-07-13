#include <Display595.h>

const int CLOCK_PIN = 5;  //SCK
const int LATCH_PIN = 6; //RCK
const int DATA_PIN = 3;  //DIO
const int DISPLAY_DIGIT_COUNT = 8;

Display595 display;

void setup() {

	Serial.begin(9600);

	display.initialize(CLOCK_PIN, DATA_PIN, LATCH_PIN, DISPLAY_DIGIT_COUNT);

	display.setNumberAndPoint(0, 7, false);
	display.setNumberAndPoint(1, 0, false);
	display.setNumberAndPoint(2, 8, false);
	display.setNumberAndPoint(3, 3, false);
	display.setNumberAndPoint(4, 1, false);
	display.setNumberAndPoint(5, 7, false);
	display.setNumberAndPoint(6, 0, false);
}

void loop() {
}
