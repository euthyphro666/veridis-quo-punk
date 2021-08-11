
/**
 * Desired behaviors for the leds.
 * 
 * 1. Static - Single color
 * 
 * 2. Pulse - Single color fades in and out
 * 
 * 3. Party - Reacts to loud sounds. Different freaquency bands effect 
 * different aspects of the pattern.
 * 
 * 4. Spectrum analyser - Each bar reacts like an eq gauge for a distinct
 * eq band.
 * 
 * 
 * 
 **/

#ifndef LED_BEHAVIOR_H
#define LED_BEHAVIOR_H

#define FASTLED_INTERNAL
#include "FastLED.h"
#include "LedBlock.h"

#define NUM_LEDS 48
#define DATA_PIN 7


class LedBehavior {

	public:
		LedBehavior();

		void update();

	private:
		CRGB leds[NUM_LEDS];

		LedBlock* leftBlocks[8];
		LedBlock* rightBlocks[8];
};


#endif