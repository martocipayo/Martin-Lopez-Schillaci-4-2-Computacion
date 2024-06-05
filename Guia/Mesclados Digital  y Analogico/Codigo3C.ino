void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
}

void loop()
{
  int parpadeo = map(analogRead(A2), 0, 1023, 0, 1300);
  
  digitalWrite(0, HIGH);
  
  delay(parpadeo);
  
  digitalWrite(1, HIGH);
  
  delay(parpadeo);
  
  digitalWrite(2, HIGH);
  
  delay(parpadeo);
  
  analogWrite(3, 140);
  digitalWrite(4, HIGH);
  
  delay(parpadeo);
  
  analogWrite(5, 80);
  analogWrite(6, 200);
  
  delay(parpadeo);
  
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  
  delay(parpadeo);
  
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  
  delay(parpadeo);
  
  analogWrite(11, 100);
  
  
  delay(parpadeo);
  
  analogWrite(10, 57);
  
  delay(parpadeo);
  
  analogWrite(9, 90);
  
  delay(parpadeo);
  
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  
  delay(parpadeo);
}