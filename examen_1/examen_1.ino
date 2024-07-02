#define buzz 13
#define potenciometro A0
#define echo 3
#define trig 2
#define red 11
#define blue 10
#define green 9
#define mensaje
  
void setup()
{
 {
  pinMode(buzz , OUTPUT);
  pinMode(potenciometro , INPUT);
  pinMode(echo , INPUT);
  pinMode(trig , OUTPUT);
  pinMode(red ,  OUTPUT);
  pinMode(blue , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(2, INPUT_PULLUP);
}
	Serial.begin(9600);
}

void loop()
{
 digitalWrite(trig, LOW);
  
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  
  delayMicroseconds(2);
  
  digitalWrite(trig, LOW);
  
  float tiempo = pulseIn( echo , HIGH );
  float distancia = tiempo / 58.2; 
  bool buttonState = digitalRead(2) == 255;
  
   if(digitalRead(botonPin) == LOW)
   {
  	boton = !boton;
    delay(200);
    cont+= 1;
      
     if(cont > 3)
     {
      	cont = 0
     }
    }
  
  if(cont == 1 && distancia > 200)
  {
   	analogWrite(pinVerde,255);
    
    analogWrite(pinRojo,0);
    analogWrite(pinAzul,0);
    Serial.print("El objeto se encuentra a : ");
  	Serial.print ( distancia );
  	Serial.print ( " cm" );
    
    Serial.print(" MODO 1");
    
  }else{
    analogWrite(pinRojo,255);
    
    analogWrite(pinVerde,0);
    analogWrite(pinAzul,0);
    
    Serial.println("ZONA INSEGURA");
  }
  
  if(cont == 2  && distancia >= 50 && distancia <= 100)
  {
   analogWrite(pinVerde,255);
    analogWrite(pinRojo,255);
    Serial.print("El objeto se encuentra a : ");
  	Serial.print ( distancia );
  	Serial.print ( " cm" );
  }else{

 analogWrite(pinRojo,255);
    analogWrite(pinVerde,0);
    analogWrite(pinAzul,0);
    
    Serial.println("ZONA INSEGURA");
  }
  
  if( cont == 3 && distancia >= 50)
  {
   analogWrite(pinAzul,255);
    analogWrite(pinRojo,0);
    analogWrite(pinVerde,0);
    
    Serial.print("El objeto se encuentra a tanta distancia : ");
  	Serial.print ( distancia );
  	Serial.print ( " cm" );
    
    Serial.print(" ZONA SEGURA");
  }else{
    
    analogWrite(pinRojo,255);
    analogWrite(pinVerde,0);
    analogWrite(pinAzul,0);
    
    Serial.println("ZONA INSEGURA");
  }
  mensaje ("La distancia actual es", distancia , "m");
      }
  
        
        
