#define RED_LED_PIN 9
#define GREEN_LED_PIN 10
#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int secuenciaRoja[] = {1, 0, 0, 1, 1, 0, 1, 1};
int secuenciaVerde[] = {0, 1, 1, 0, 0, 1, 0, 0};

void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < length(secuenciaRoja, int); i++) {
    digitalWrite(RED_LED_PIN, secuenciaRoja[i]);
    digitalWrite(GREEN_LED_PIN, secuenciaVerde[i]);
    delay(500);
  }
}
