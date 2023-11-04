int tsensor = 7;
int buz=6;
void setup() 
{
  Serial.begin(9600);
  pinMode(tsensor,INPUT);
  pinMode(buz,OUTPUT);
}
void loop() {
  int touchDetected = digitalRead(tsensor);
  if (touchDetected == 1) {
    Serial.println("Sensor is being touched");
    digitalWrite(buz,HIGH);
  }
  else 
  {
    Serial.println("Sensor is not being touched");
    digitalWrite(buz,LOW);
  }
  delay(1000);
}

