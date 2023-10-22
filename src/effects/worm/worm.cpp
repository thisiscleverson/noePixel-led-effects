#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "setHueColor/setHueColor.h"
#include "worm.h"


void worm(int wait){
   int i=0;
   int firstPixelHue = 0; 
   int numPixels = strip.numPixels();

   while(i<numPixels){
      int firstColor = setHueColor(firstPixelHue);
      int secondPixelHue = firstPixelHue + (65536 / 90);
      for(int p=0; p<numPixels; p++){
         strip.clear();
         strip.fill(firstColor);
         for(int b=-1; b<3; b++){
            strip.setPixelColor((p+b), setHueColor(secondPixelHue));
            strip.show();
         }
         delay(wait);
      }
      firstPixelHue += 65536 / 90;
      i++;
   }
}