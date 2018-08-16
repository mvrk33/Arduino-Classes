
void setup() {
pinMode(A0,INPUT);  
Serial.begin(115200);
}

void loop() {
double voltage=analogRead(A0);
voltage=(voltage*5000)/1024;
voltage=voltage/1000;
Serial.println(voltage);
}
