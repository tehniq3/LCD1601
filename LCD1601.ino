
/*
 LiquidCrystal Library - Hello World

 Demonstrates the use a 16x1 LCD display instad 16x2 LCD display.
 The LiquidCrystal library works with all LCD displays that are compatible with the 
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 Original sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 adapted schematic by Nicu Florica (niq_ro) from http://ww.niq.go.ro 

ideea and base sketch for LCD1601 by Nick Norton from http://www.nicknorton.net/
viodeo: https://www.youtube.com/watch?v=boK49DHw7PM
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
// set up the LCD's number of columns and rows:
// A 1x16 Line display is addressed as 2x8
lcd.begin(8, 2);
// Print a message to the LCD.
lcd.print("Hello, w");
// Move the cursor to the beginning of the second address block
// (note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(0, 1);
lcd.print("orld!");
}

void loop() {
// set the cursor to column 0, line 1
// (note: line 1 is the second row, since counting begins with 0):
lcd.setCursor(5, 1);
// print the number of seconds since reset:
lcd.print(millis()/1000);
}
