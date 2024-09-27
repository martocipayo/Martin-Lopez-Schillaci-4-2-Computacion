#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int ledPins[] = {LED1, LED2, LED3, LED4, LED5};
int secuencia[] = {1, 1, 1, 1, 1};

void setup() {
  for (int i = 0; i < length(ledPins, int); i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
 
  for (int i = 0; i < length(ledPins, int); i++) {
    digitalWrite(ledPins[i], secuencia[i]);
    delay(500); 
  }
  

  for (int i = length(ledPins, int) - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(500); 
  }
}
