void setup()
{
  pinMode( 2 , OUTPUT);
}

void loop()
{
   analogWrite (2 , 255);
 
   delay(700);
  
   analogWrite (2, 10);
     
   analogWrite (2 , 60);
   delay(700);
     
   analogWrite (2 , 115);
   delay(700);
     
   analogWrite (2 , 150);
   delay(700);
     
   analogWrite (2 , 255);
   delay(700);
  
}
