
/**
 * Each led block serves 
 * 
 * 
 * 
 **/

#ifndef LED_BLOCK_H
#define LED_BLOCK_H

#define FASTLED_INTERNAL
#include "FastLED.h"

class LedBlock {
    public: 
        LedBlock(CRGB *led);

        // void setColor(CRGB& rgb);
        // void setBlock(CRGB left, CRGB mid, CRGB right);

    
    private:
        CRGB *leds;
};

#endif