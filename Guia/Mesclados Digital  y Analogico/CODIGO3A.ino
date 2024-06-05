int ledPin = 13;
int buzzerPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {

  analogWrite(buzzerPin, 128); 
  digitalWrite(ledPin, HIGH); 
  delay(500); 
  
  
  digitalWrite(ledPin, LOW); 
  analogWrite(buzzerPin, 64); 
  delay(500);

}
