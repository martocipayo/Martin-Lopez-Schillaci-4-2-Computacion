#define LED_PIN 9
#define BOTON_PIN 8
#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int secuencia[5];
int indice = 0;
bool boton = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BOTON_PIN, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (indice < 5) {
    digitalWrite(LED_PIN, HIGH);
    delay(1000);

    if (digitalRead(BOTON_PIN) == LOW) {
      boton = true;
      delay(50);
    } else {
      boton = false;
    }

    secuencia[indice] = boton;
    indice++;

    digitalWrite(LED_PIN, LOW);
    delay(1000);
  } else {
    for (int i = 0; i < length(secuencia, int); i++) {
      Serial.print("Dato ");
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.println(secuencia[i]);
    }

    for (int i = 0; i < length(secuencia, int); i++) {
      secuencia[i] = 0;
    }
    indice = 0;
    delay(2000);
  }
}
