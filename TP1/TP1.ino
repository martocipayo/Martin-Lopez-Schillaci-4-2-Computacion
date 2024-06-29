void setup()
{
  pinMode( 10 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 7 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 4 , OUTPUT );
  pinMode( 3 , OUTPUT );
}

void loop()
{
  digitalWrite(7, HIGH);
  
  delay(100);
  
  digitalWrite(7, LOW);
  analogWrite(9 , 0);
  analogWrite(10 , 0);
  analogWrite(3 , 255);
  
  delay(1000);
  
  digitalWrite(7, HIGH);
  
  delay(100);
  
  digitalWrite(7, LOW);
  analogWrite(3 , 0);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  
  delay(1000);
  
  digitalWrite(7, HIGH);
  
  delay(100);
  
  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  analogWrite(9 , 255);
  analogWrite(10 , 255);
  
  delay(1000);
}