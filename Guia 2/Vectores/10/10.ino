
#define BUZZER_PIN 8
#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int numeros[10];

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  for (int i = 0; i < length(numeros, int); i++) {
    numeros[i] = random(1, 11);
    Serial.print("Numero ");
    Serial.print(i + 1);
    Serial.print(": ");
    Serial.println(numeros[i]);

    if (numeros[i] == 5) {
      tone(BUZZER_PIN, 1000);
      delay(500);
      noTone(BUZZER_PIN);
    }
  }

  delay(2000);
}
