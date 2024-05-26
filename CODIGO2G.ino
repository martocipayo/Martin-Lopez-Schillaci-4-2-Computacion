
void setup()
{
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
   int SONIDOS = map(analogRead(A0),0,1012,0,255);
   analogWrite(9,SONIDOS);
}
