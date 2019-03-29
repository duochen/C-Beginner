/*
 * Description:
 *  Open Blink sketch from Arduino IDE: File | Examples | 01.Basics, move all of the code inside 
 *  loop() function into a separate function called blink() and call blink() inside loop() function.
 *  Verify the blink program's execution: the led light turns on and off every one second.
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
}

void loop() {
  blink();  
}

void blink() 
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                        // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                        // wait for a second
}
