int irs=8;
int buz=6;
void setup() 
{
  pinMode(irs,INPUT);
  pinMode(buz,OUTPUT);
}

void loop()
{
  int data=digitalRead(irs);
  if(data==1)
  {
    digitalWrite(buz,HIGH);
  }
  else
  {
    digitalWrite(buz,LOW);
  }
  Serial.println(data);
}
