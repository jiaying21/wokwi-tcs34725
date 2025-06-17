#include <Wire.h>
#include "Adafruit_TCS34725.h"

Adafruit_TCS34725 tcs(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(9600);
  if (tcs.begin()) Serial.println("TCS34725 found");
  else Serial.println("No TCS34725 detected");
}

void loop() {
  uint16_t r,g,b,c;
  tcs.getRawData(&r,&g,&b,&c);
  Serial.print("R: ");Serial.print(r);
  Serial.print(" G: ");Serial.print(g);
  Serial.print(" B: ");Serial.print(b);
  Serial.print(" C: ");Serial.println(c);
  delay(1000);
}
