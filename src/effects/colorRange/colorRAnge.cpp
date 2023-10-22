#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "setHueColor/setHueColor.h"
#include "colorRange.h"



void colorRange(int wait){
   int firstPixelHue = 0;     
   for(int a=0; a<strip.numPixels(); a++) {

      int color = setHueColor(firstPixelHue);
      strip.fill(color); 

      for(int b=50; b<=255; b+=5){
         strip.setBrightness(b);
         strip.show();
         delay(wait); 
      }

      for(int x=255; x>50; x-=5){
         strip.setBrightness(x);
         strip.show();
         delay(wait);
      }

      firstPixelHue += 65536 / 90; 
   } 
}