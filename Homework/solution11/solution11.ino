/*
 * Description:
 *  Use map() function to map the value of 24 
 *  from the range(0, 1023) to the range(0, 255)
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

void setup() {
  Serial.begin(9600);
  int x = map(100, 0, 1023, 0, 255);
  Serial.println(x);
}

void loop() {
}
