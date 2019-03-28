/*
 * Description:
 *  Use String to manipulate the texts. There are two texts: 
 *  text1: "This string"
 *  text2: " has more text"
 *
 *  1. Print the lengths of text1 and text2 on the serial monitor
 *  2. Append the contents of text1 to the end of text1.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

String text1 = "This string";
String text2 = " has more text";
String text3;  // to be assigned within the sketch

void setup() {
  Serial.begin(9600);

  Serial.print(text1);
  Serial.print(" is ");
  Serial.print(text1.length());
  Serial.println(" characters long.");

  Serial.print("text2 is ");
  Serial.print(text2.length());
  Serial.println(" characters long.");

  text1.concat(text2);
  Serial.println("text1 now contains: ");
  Serial.println(text1);
}

void loop() {
  // put your main code here, to run repeatedly:

}
