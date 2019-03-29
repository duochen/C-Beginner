/*
 * Description:
 *  Using for statement to print out the following 
 *  numbers on the serial monitor only once:
 *  2,3,4,6,9,13,19,28,42,63,94
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

void setup() {
  Serial.begin(9600);

  for (int x = 2; x < 100; x = x * 1.5) {
    Serial.println(x);
  }
}

void loop() {
}
