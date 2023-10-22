#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "rgbRibbon.h"


void rgbRibbon(int wait){
    int firstPixelHue = 0;     
    for(int a=0; a<30; a++) {  
        int hue  =  firstPixelHue * 65536L / strip.numPixels();
        uint32_t color = strip.gamma32(strip.ColorHSV(hue));
        strip.fill(color); 
        
        strip.show();               
        delay(wait);                 
        firstPixelHue += 65536 / 90; 
    }
}