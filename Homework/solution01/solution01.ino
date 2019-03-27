/*
 * Description:
 *  Print "Hello, world!" on the serial monitor
 *  every one second
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/26/2019
 */
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello, world!");
  delay(1000);
}
