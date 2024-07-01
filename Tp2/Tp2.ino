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
  int parpadeo = map(analogRead(A2),0,1023,200,1500);
  digitalWrite(7, HIGH);
  
  parpadeo(500);
  
  digitalWrite(7, LOW);
  analogWrite(9 , 0);
  analogWrite(10 , 0);
  analogWrite(3 , 255);
  
  parpadeo(1000);
  
  digitalWrite(7, HIGH);
  
  parpadeo(500);
  
  digitalWrite(7, LOW);
  analogWrite(3 , 0);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  
  parpadeo(1000);
  
  digitalWrite(7, HIGH);
  
  parpadeo(100);
  
  