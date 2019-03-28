/*
 * Description:
 *  Print a character received through the serial port.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */
 
int incomingByte = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // reply only when you recive data
  if (Serial.available() > 0) {
    // read the incoming byte
    incomingByte = Serial.read();

    // say what you got
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
}
