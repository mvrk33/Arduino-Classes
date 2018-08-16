
int sensorpin = 10, sen2 = 11, a = 4, b = 8;
void setup() {
  pinMode(sensorpin, INPUT);
  pinMode(sen2, INPUT);
  Serial.begin(9600);
}

void loop() {

  int switchvalue = digitalRead(sensorpin);
  int switchvalue1 = digitalRead(sen2);
  //Serial.print(switchvalue);
  //Serial.print(",");
  //Serial.println(switchvalue1);
  if (switchvalue == 1)
  {
    Serial.print("addition of a and b is ");
    Serial.println(a + b);

  }
  else if (switchvalue1 == 1)
  {
    Serial.print("division of a and b is ");
    Serial.println(a / b);

  }
  else
  {
    Serial.println("waiting for switch to be pressed");
  }

}
