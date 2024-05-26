void setup()
{
  pinMode(A4, INPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  int parpadeo = map(analogRead(A4), 0, 1023, 0, 10000); 
  digitalWrite(3, HIGH);
  delay(parpadeo);
  digitalWrite(3, LOW);
  delay(parpadeo);

