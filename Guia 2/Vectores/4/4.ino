#define LED_PIN 9
#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int secuencia[] = {1, 0, 0, 1, 1, 0, 1, 1};

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < length(secuencia, int); i++) {
    if (secuencia[i] == 1) {
      digitalWrite(LED_PIN, HIGH);
    } else {
      digitalWrite(LED_PIN, LOW);
    }
    delay(500);
  }
}
