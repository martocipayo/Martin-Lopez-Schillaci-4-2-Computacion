void setup()
{
  pinMode(A3, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  
  delay(analogRead(A3));
  
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  
  delay(analogRead(A3));
  
  Serial.println(analogRead(A3));
}
