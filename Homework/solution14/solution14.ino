/*
 * Description:
 *  Convert 12345 and 123456789 to strings and print
 *  out the lengths of the strings on the serial monitor.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

char buffer[12]; // long data type has 11 characters and a terminating null
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  long value = 12345;
  ltoa(value, buffer, 10);
  Serial.print(value);
  Serial.print(" has ");
  Serial.print(strlen(buffer));
  Serial.println(" digits");
  value = 1234556789;
  ltoa(value, buffer, 10);
  Serial.print(value);
  Serial.print(" has ");
  Serial.print(strlen(buffer));
  Serial.println(" digits");
  delay(1000);

}
