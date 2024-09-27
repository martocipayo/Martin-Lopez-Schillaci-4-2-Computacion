#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

float valores[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};

void setup() {
  Serial.begin(9600);

  float maximo = valores[0];

  for (int i = 1; i < length(valores, float); i++) {
    if (valores[i] > maximo) {
      maximo = valores[i];
    }
  }

  Serial.print("El número más grande es: ");
  Serial.println(maximo);
}

void loop() {
}


