#include "LedBehavior.h"

LedBehavior::LedBehavior()
{
	FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);

	// Set up each block
	for(int i = 0; i < 8; i++) {
		// LedBLock* left = LedBlock::LedBlock(leds + i);
		this.leftBlocks[i] = *LedBlock::LedBlock(leds + i);

		// CRGB* right = leds + i + (8 * 3);
		// this.rightBlocks[i] = LedBlock(right);

		// this.leftBlocks[i].setColor(CRGB::White);
		// this.rightBlocks[i].setColor(CRGB::Purple);
	}
	
	FastLED.show();
}

void LedBehavior::update()
{
}