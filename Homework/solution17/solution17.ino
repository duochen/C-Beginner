/*
 * Description:
 *  Modify Blink sketch from Arduino IDE: File | Examples | 01.Basics with a function 
 *  called blink to determines how many times the LED will flash.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/29/2019
 */

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  blink(3);
}

void loop() {
  
}

void blink(int count) 
{
  while (count > 0)                    // repeat until couont is no longer greater than zero
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                        // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(500);                        // wait for a second
    count = count - 1;                 // decrement count
  }
}
