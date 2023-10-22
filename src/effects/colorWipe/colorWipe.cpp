#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "colorWipe.h"

void colorWipe(char32_t color, int wait) {
  for(int i=0; i<strip.numPixels(); i++) { // For each pixel in strip...
    strip.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  }
}
