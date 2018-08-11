void setup() {
  pinMode(12,OUTPUT); // defines 12 pin as output
}

void loop() {
 digitalWrite(12,HIGH); // gives 5v to 12 pin 
 delay(100); // waits for 100 milli sec
digitalWrite(12,LOW);
 delay(100);
}
