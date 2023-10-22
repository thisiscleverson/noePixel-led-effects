#include <Arduino.h>
#include "configNeoPixel/configNeoPixel.h"
#include "setHueColor.h"

int setHueColor(int PixelHue){
   int hue  =  PixelHue * 65536L / strip.numPixels();
   int color = strip.gamma32(strip.ColorHSV(hue));
   return color;
}
