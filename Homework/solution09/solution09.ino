/*
 * Description:
 *  Write a function called square which take a float argument 
 *  and return the sqaure result. Print out the result on the serial monitor.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */
 
void setup() {
  Serial.begin(9600);
  float result = square(10.0);
  Serial.println(result);  
}

void loop() {
  
}

float square(float x)
{
  float p;
  p = x * x;
  return p;
}
