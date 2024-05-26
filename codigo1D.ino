void setup()
{
  pinMode(10 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(9 , OUTPUT);
}

void loop()
{
 
   digitalWrite(9 , HIGH);
     
   digitalWrite(8 , HIGH);
 
   delay(500);
 
   digitalWrite(9 , LOW);
 
   delay(300);
   
   
   digitalWrite(8 , LOW);
 
   delay(500);
 
   digitalWrite(9 , HIGH);
 
   digitalWrite(10 , HIGH);
 
   delay(500);
  
   digitalWrite(10 , LOW);
   delay(500);
   digitalWrite(9 , LOW);
   delay(300);
}

