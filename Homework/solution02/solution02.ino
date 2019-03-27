/*
 * Description:
 *  Define an int array called myArray and initialize it with 1, 2, 3, 4.
 *  Print out each element in array on the serial monitor every three seconds.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/27/2019
 */

int myArray[4] = {1,2,3,4};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 4; i++) {
    Serial.println(myArray[i]);
  }
  delay(3000);
}
