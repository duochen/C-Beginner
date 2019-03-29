/*
 * Description:
 *  Write a program to randomly generate two integers and implement a function called
 *  swap() to swap the values by using global variables. Print out the values of the 
 *  variables before swapping and after swapping.
 * 
 * Author:
 *  Duo Chen
 * 
 * Date:
 *  3/29/2019
 */

int x;  // x is a global variable 
int y;  // y is a global variable

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = random(10);
  y = random(10);

  Serial.print("The value of x and y before swapping are: ");
  Serial.print(x);
  Serial.print(",");
  Serial.println(y);

  swap();
  
  Serial.print("The value of x and y after swapping are: ");
  Serial.print(x);
  Serial.print(",");
  Serial.println(y);

  delay(2000);   // Delay 2 seconds
}

// swap the two global values
void swap()
{
  int temp;
  temp = x;
  x = y;
  y = temp;  
}
