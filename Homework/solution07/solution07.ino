/*
 * Description:
 *  Use while to print the numbers from 1 to 10.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  int var = 1;
  while (var <= 10) {
    Serial.println(var);
    var++;
  }
  delay(3000);
}
