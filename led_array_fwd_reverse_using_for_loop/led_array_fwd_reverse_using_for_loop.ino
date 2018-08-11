void setup() {
for(int i=8;i<=13;i++)
{
  pinMode(i,OUTPUT);//defines digital pins from 8-13 as outputs
  }
}

void loop() {
  for(int i=8;i<=13;i++) // forward
{
 digitalWrite(i,HIGH);
 delay(50);
 digitalWrite(i,LOW);
 delay(50);
}
 for(int i=13;i>=8;i--)// reverse
{
 digitalWrite(i,HIGH);
 delay(50);
 digitalWrite(i,LOW);
 delay(50);
}
}
