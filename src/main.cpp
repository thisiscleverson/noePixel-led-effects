#include <Arduino.h>

#include "configNeoPixel/configNeoPixel.h"

//effects functions
#include "effects/colorWipe/colorWipe.h"
#include "effects/rainbow/rainbow.h"
#include "effects/theaterChase/theaterChase.h"
#include "effects/theaterChaseRainbow/theaterChaseRainbow.h"
#include "effects/rgbRibbon/rgbRibbon.h"
#include "effects/colorRange/colorRange.h"
#include "effects/worm/worm.h"



void setup() {
  Serial.begin(115200);
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  //strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}


void loop() {
  // Fill along the length of the strip in various colors...

  colorWipe(strip.Color(255,   0,   0), 50); // Red
  colorWipe(strip.Color(  0, 255,   0), 50); // Green
  colorWipe(strip.Color(  0,   0, 255), 50); // Blue

  // Do a theater marquee effect in various colors...

  theaterChase(strip.Color(127, 127, 127), 50); // White, half brightness
  theaterChase(strip.Color(127,   0,   0), 50); // Red, half brightness
  theaterChase(strip.Color(  0,   0, 127), 50); // Blue, half brightness

  rainbow(10);            
  theaterChaseRainbow(50); 
  rgbRibbon(1000);

  colorRange(50);
  
  worm(50);
}







