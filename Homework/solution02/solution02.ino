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
