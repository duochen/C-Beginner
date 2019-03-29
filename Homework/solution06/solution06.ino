/*
 * Description:
 *  Use do-while statement to generate 10 random numbers every one second. 
 *  The random numbers must be less than 100.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/28/2019
 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  int x = 0;
    do {
      delay(1000);
      x = random(100);
      Serial.println(x);
    } while (x < 10);
}
