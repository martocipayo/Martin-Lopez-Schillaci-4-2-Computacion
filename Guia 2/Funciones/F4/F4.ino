#define ROJO 2 
#define SENSOR 3 

int sensor = LOW; 

void setup() {
  pinMode(ROJO, OUTPUT); 
  pinMode(SENSOR, INPUT);  
   
}

void loop() {
  sensor = digitalRead(SENSOR); 
  if (sensor == HIGH) { 
    digitalWrite(ROJO, HIGH); 
    
  } else {
    digitalWrite(ROJO, LOW); 
    
  }
  delay(1000); 
}
