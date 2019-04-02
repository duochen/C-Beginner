/*
 * Description:
 *  From the serial monitor, send the character 1, 
 *  the LED 13 blinks once, send the character 2,
 *  the LED 13 blinks two times. Send any other character,
 *  nothing will happen.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/29/2019
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available())   // check to see if at least one character is available
  {
    char ch = Serial.read();
    Serial.println(ch);
    switch(ch)
    {
      case '1':
        blink();
        break;
      case '2':
        blink();
        blink();
        break;
    }
  }
}

void blink()
{
  Serial.println("Turn LED Light On");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  Serial.println("Turn LED Light Off");  
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  
}
