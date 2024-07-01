#define PIR 2
#define LED_R 9
#define LED_G 10
#define LED_B 11
#define ECHO 3
#define TRIG 4 
#define BUZZER 12


#define TONO_ALARMA_1 1000 
#define TONO_ALARMA_2 1500 

int movimiento = 0; 


void setup() {
  pinMode(PIR, INPUT); 
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT); 
  pinMode(LED_R, OUTPUT); 
  pinMode(LED_G, OUTPUT); 
  pinMode(LED_B, OUTPUT); 
  pinMode(BUZZER, OUTPUT); 
  Serial.begin(9600);
}
void loop() {
  movimiento = digitalRead(PIR);   
  
  digitalWrite(TRIG, LOW);
  
  delayMicroseconds(2);
  
  digitalWrite(TRIG, HIGH);
  
  delayMicroseconds(2);
  
  digitalWrite(TRIG, LOW);
  
  float tiempo = pulseIn( ECHO , HIGH );
  float distancia = tiempo / 58.2; 
                    
  if (movimiento == HIGH) {
    
    analogWrite(LED_R, 255);
    analogWrite(LED_G, 255);
    analogWrite(LED_B, 0);
    
    if (distancia > 100) {      
      analogWrite(LED_R, 255);
      analogWrite(LED_G, 0);
      analogWrite(LED_B, 0);
      
      digitalWrite(BUZZER, HIGH);
      delay(50); 
      digitalWrite(BUZZER, LOW);
      delay(500); 
      digitalWrite(BUZZER, HIGH);
      delay(50); 
      digitalWrite(BUZZER, LOW);
      delay(500); 
    }

  } else { 
    analogWrite(LED_R, 0);
    analogWrite(LED_G, 255);
    analogWrite(LED_B, 0);
    digitalWrite(BUZZER, LOW);
  }
  
}

