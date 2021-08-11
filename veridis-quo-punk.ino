#include "Arduino.h"
#include "LedBehavior.h"
// #include "Buttons.h"

unsigned long LastTime = 0;

LedBehavior* behavior;

void setup()
{
    // behavior = malloc();
}

void loop()
{
	unsigned long now = millis();


}

// void handleButtons()
// {
// 	if (getButtonPressed(ENC_BTN_PIN, 0))
// 	{
// 		toggleBuiltInLight();
// 	}
// 	if (getButtonPressed(ENC_CLK_PIN, 1))
// 	{
// 	}
// 	if (getButtonPressed(ENC_CNT_PIN, 2))
// 	{
// 	}
// }

// void toggleBuiltInLight() {
// 	BuiltInOn = !BuiltInOn;
// 	if(BuiltInOn == true) {
//   		digitalWrite(LED_BUILTIN, HIGH);
// 	}
// 	else {
//   		digitalWrite(LED_BUILTIN, LOW);
// 	}
// }
