#define buzz 13
#define potenciometro A0
#define echo 3
#define trig 2
#define red 11
#define blue 10
#define green 9


void setup()
{
  pinMode(buzz , OUTPUT);
  pinMode(potenciometro , INPUT);
  pinMode(echo , INPUT);
  pinMode(trig , OUTPUT);
  pinMode(red ,  OUTPUT);
  pinMode(blue , OUTPUT);
  pinMode(green , OUTPUT);
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
  
  if (distancia <= 200 && distancia >=101 ){
    digitalWrite(buzz, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
  }
                        
else if(distancia <= 100 && distancia >= 50){
    digitalWrite(green, HIGH);
     digitalWrite(blue, LOW);
     digitalWrite(red, LOW);
    digitalWrite(buzz, HIGH);
    delay(800);
  }
  
  else if(distancia <= 50 && distancia >= 21){
    digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
    digitalWrite(red, LOW);
    digitalWrite(buzz, HIGH);
    delay(400);
}

  else if (distancia <= 20){
  digitalWrite(red, HIGH);
  digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
    digitalWrite(buzz, HIGH);
     delay(100);
}
