void setup()
{
  pinMode(11,OUTPUT);//rojo
  pinMode(9,OUTPUT);//verde
  pinMode(10,OUTPUT);//azul
  
}

void loop()
{
  analogWrite(11, 0);
  analogWrite(9, 255);
  analogWrite(10, 255);
  delay(1000); 
  analogWrite(11, 0);
  analogWrite(9, 125);
  analogWrite(10, 125);
  delay(1000);
  analogWrite(11, 0);
  analogWrite(9, 55);
  analogWrite(10, 55);
  delay(1000);
  analogWrite(11, 255);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000); 
  analogWrite(11, 125);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000); 
  analogWrite(11, 55);
  analogWrite(9, 0);
  analogWrite(10, 0);
  delay(1000); 
  analogWrite(11, 255);
  analogWrite(9, 255);
  analogWrite(10, 0);
  delay(1000); 
  analogWrite(9, 125);
  analogWrite(10, 0);
  delay(1000); 
  analogWrite(9, 55);
  analogWrite(10, 0);
  delay(1000); 
}
