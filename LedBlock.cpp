#include "LedBlock.h"

LedBlock::LedBlock(CRGB *led)
{
    this->leds = led;
}


// void LedBlock::setColor(CRGB& rgb)
// {
//     leds[0] = rgb;
//     leds[1] = rgb;
//     leds[2] = rgb;
// }

// void LedBlock::setBlock(CRGB left, CRGB mid, CRGB right)
// {
//     leds[0] = left;
//     leds[1] = mid;
//     leds[2] = right;
// }