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
  
  if (distancia > 200 ){
    analogWrite(buzz, 0);
    analogWrite(green, 255);
    analogWrite(blue, 0);
    analogWrite(red, 0);
    Serial.print("zona segura");
  }
                        
 else if(distancia <= 100 && distancia >= 50){
   
    analogWrite(green, 255);
     analogWrite(blue, 0);
     analogWrite(red, 0);
    analogWrite(buzz, 255);
    delay(800);
  }
  
  else if(distancia < 50 && distancia >= 20){
  	analogWrite(red, 255);
	analogWrite(blue, 0);
    analogWrite(green, 122);
    analogWrite(buzz, 255);
    delay(400);
    Serial.print("zona de medio riesgo");
}

 	 else (distancia < 20);{
 	analogWrite(red, 255);
 	analogWrite(blue, 0);
  	analogWrite(green, 0);
  	analogWrite(buzz, 255);
     delay(100);
     Serial.println("Zona De  Peligro/atención!");
}

  mensaje ("La distancia actual es", distancia , "m");

      }
  
        
        
