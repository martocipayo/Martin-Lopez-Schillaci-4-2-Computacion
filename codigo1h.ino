bool boton = false;
int cont = 0;
void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(digitalRead(2) == LOW){
  	 boton = !boton;
     delay(200);
     cont+=1;  
 }if(cont == 1){
  	digitalWrite(8, LOW);
    digitalWrite(6, HIGH);
    
    
  }if(cont == 2){
  	digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    
  }if(cont == 3){
  	digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    
  }if(cont == 4){
  	digitalWrite(8, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
  
  }if(cont == 5){
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    
   }if(cont == 6){
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
   
  }if(cont == 7){
    digitalWrite(7, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(8, HIGH);
   }if(cont == 8){
  	cont = 1;
    digitalWrite(8, LOW);
   }
	Serial.println(cont);
}

