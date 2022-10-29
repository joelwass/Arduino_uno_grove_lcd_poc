/*
  Example of printing values to a Grove-LCD RGB Backlight V4.0
  using an Arduino Uno Wifi.
  
  This example code is in the public domain.
*/

#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

// the setup function runs once when you press reset or power the board
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  lcd.setRGB(colorR, colorG, colorB);

  // Print a message to the LCD.
  lcd.print("hello, world!");
}

// the loop function runs over and over again forever
void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

  delay(100);
}
