/*
 * Description:
 *  You have a string that contains 3 pieces of data
 *  seprated by commas: "Peter,Paul,Mary". You want to
 *  split the string so that you can print each invidal 
 *  on the serial monitResult:
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */
String text = "Peter,Paul,Mary";  // an exmple string
String message = text;            // holds text not yet split
int commaPosition;                // the position of the next comma in the string


void setup() {
  Serial.begin(9600);
  Serial.println(message);  // show the source string
  do {
    commaPosition = message.indexOf(',');
    if (commaPosition != -1) {
      Serial.println(message.substring(0, commaPosition));
      message = message.substring(commaPosition+1, message.length());
    }
    else {
      // here after the last comma is found
      if (message.length() > 0) {
        Serial.println(message); // if htere is text after the last comma, print it
      }
    }
  } while (commaPosition >= 0);

}

void loop() {
}
