void setup()
{
  pinMode(9, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop()
{
  bool boton = digitalRead( 2 );
  
  
  
  if(boton == false){
  	analogWrite(9, 147);
    
    delay(200);
    
    digitalWrite(9, LOW);
    
    delay(200);
  }
  else{
  	digitalWrite(9, LOW);
  }
}

