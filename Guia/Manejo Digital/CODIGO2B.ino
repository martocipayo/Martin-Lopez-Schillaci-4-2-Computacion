void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  digitalWrite(11, LOW); 
  delay(700);
  
  digitalWrite(2,LOW);
  digitalWrite(3, HIGH);   
   delay(700);
  
  digitalWrite(3,LOW);
  digitalWrite(4, HIGH);   
   delay(700);
    
  digitalWrite(4,LOW);
  digitalWrite(5, HIGH);   
   delay(700);
   
  digitalWrite(5,LOW);
  digitalWrite(6, HIGH);   
   delay(700);
   
  digitalWrite(6,LOW);
  digitalWrite(7, HIGH);   
   delay(700);
  
  digitalWrite(7,LOW);
  digitalWrite(8, HIGH);   
   delay(700);
  
  digitalWrite(8,LOW);
  digitalWrite(9, HIGH);   
   delay(700);
  
  digitalWrite(9,LOW);
  digitalWrite(10, HIGH);   
   delay(700);
  
  digitalWrite(10,LOW);
  digitalWrite(11, HIGH);   
   delay(700);
}
