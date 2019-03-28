/*
 * Description:
 *  Creates a number from a string "12345" and print it 
 *  on the serial monitor.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

char strValue[6] = "12345";

void setup() {
  Serial.begin(9600);
  int x = atoi(strValue);
  Serial.println(x);
}

void loop() {
}
