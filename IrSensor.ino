int irs=8;
void setup() 
{
  pinMode(irs,INPUT);
}
void loop() 
{
  int data=digitalRead(irs);
  Serial.println(data);
}