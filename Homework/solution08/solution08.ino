/*
 * Description:
 *  Create an integer array with 5 elements: 10, 20, 30, 40, 50.
 *  Use for statement to print each element in the array.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

int arr[5] = {10, 20, 30, 40, 50};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    Serial.println(arr[i]);
  }
  delay(3000);
}
