void setup() {
  // put your setup code here, to run once:
  Serial.begin(31250);
  int i;
  for (i = 2; i < 14; i++) {
    pinMode(i, INPUT);
  }

}
void loop() {
  // put your main code here, to run repeatedly:
  int i;
  int j = 0;
  String inputs = "";
  //reads in all inputs
  for (i = 2; i < 14; i++) {
    inputs += (char) digitalRead(i);
  }
  inputs += "\n";
  Serial.print(inputs);
  delay(20);

}
