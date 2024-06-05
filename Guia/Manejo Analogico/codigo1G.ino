
bool boton = false;
int cont = 0;
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, INPUT_PULLUP);
}

void loop()
{
  
  
  
  if(digitalRead(7) == LOW){
  	boton = !boton;
    delay(200);
    cont+= 1;
    }
  
  
  if(cont == 1){
  	digitalWrite(6, LOW);
    digitalWrite(2, HIGH);
    
  }if(cont == 2){
  	digitalWrite(2, LOW);
    digitalWrite(4, HIGH);
    
  }if(cont == 3){
  	digitalWrite(4, LOW);
    digitalWrite(6, HIGH);
    
  }if(cont >= 4){
  	cont = 1;
  }

}
