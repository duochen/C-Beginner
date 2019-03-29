/*
 * Description:
 *  Use for statement to print out the following numbers: 10, 8, 6, 4, 2 on the serial monitor.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/29/2019
 */

void setup() {
  Serial.begin(9600);
  for (int i = 10; i > 0; i = i - 2) {
    Serial.println(i);
  }
}

void loop() {

}
