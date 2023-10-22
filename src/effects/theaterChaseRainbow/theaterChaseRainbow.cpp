#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "theaterChaseRainbow.h"

void theaterChaseRainbow(int wait) {
  int firstPixelHue = 0;     
  for(int a=0; a<30; a++) {  
    for(int b=0; b<3; b++) { 
      strip.clear();         
      for(int c=b; c<strip.numPixels(); c += 3) {
        int      hue   = firstPixelHue + c * 65536L / strip.numPixels();
        uint32_t color = strip.gamma32(strip.ColorHSV(hue));
        strip.setPixelColor(c, color); 
      }
      strip.show();               
      delay(wait);                 
      firstPixelHue += 65536 / 90; 
    }
  }
}