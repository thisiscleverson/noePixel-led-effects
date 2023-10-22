#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "rainbow.h"

void rainbow(int wait) {
  for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 256) {
    strip.rainbow(firstPixelHue);
    strip.show(); // Update strip with new contents
    delay(wait); 
  }
}