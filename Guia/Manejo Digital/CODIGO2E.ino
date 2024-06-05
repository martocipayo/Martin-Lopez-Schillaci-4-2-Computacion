void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  }

void loop()
{
  int r = map(analogRead(A0), 0, 1023, 0, 255); 
  int g = map(analogRead(A1), 0, 1023, 0, 255); 
  int b = map(analogRead(A2), 0, 1023, 0, 255); 
  analogWrite(3, r);
  analogWrite(6, g);
  analogWrite(5, b);
}
