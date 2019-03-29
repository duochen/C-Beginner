/*
 * Description:
 *  Use for statement to print out the following numbers: 0, 2, 4, 6, 8 on the serial monitor.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/29/2019
 */

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 10; i = i + 2) {
    Serial.println(i);
  }
}

void loop() {

}
