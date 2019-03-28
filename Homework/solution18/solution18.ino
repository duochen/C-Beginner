/*
 * Description:
 *  Floating-point numbers are used for values expressed with 
 *  decimal points (this is the way to represent fractional values).
 *  You want to calculate and compare these values in your sketch.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

float value = 1.1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = value - 0.1; // reduce value by 0.1 each time through the loop
  if (value == 0) 
  {
    Serial.println("The value is exactly zero");    
  }
  else if (almostEqual(value, 0))
  {
    Serial.print("The value ");
    Serial.print(value, 7); // print to 7 decimal places
    Serial.println(" is almost equal to zero");
  }
  else
  {
    Serial.println(value);
  }

  delay(1000);
  
}

boolean almostEqual(float a, float b)
{
  const float DELTA = 0.00001; // max difference to be almost equal
  if (a == 0) return fabs(b) <= DELTA;
  if (b == 0) return fabs(a) <= DELTA;
  return fabs((a - b) / max(fabs(a), fabs(b))) <= DELTA;
}
