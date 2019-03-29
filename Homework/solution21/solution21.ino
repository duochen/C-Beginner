
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
      default:
        Serial.print(ch);
        Serial.println(" was recived but not expected");
        break;
    }
  }
}

void blink()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);  
}
