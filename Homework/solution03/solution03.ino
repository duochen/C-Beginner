/*
 * Description:
 *  Define a constant called pi for a floating number which is 3.14.
 *  Use it to calcualte the area of the circle. The radius of the circle is 6.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

const float pi = 3.14;

void setup() {
  Serial.begin(9600);
  float radius = 6.0;
  float area = pi * radius * radius;
  Serial.println(area);
}

void loop() {
  // put your main code here, to run repeatedly:

}
