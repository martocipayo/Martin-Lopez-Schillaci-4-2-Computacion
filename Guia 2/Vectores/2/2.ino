#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int valores[] = {10, 4, 2};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < length(valores, int) - 1; i++) {
    for (int j = 0; j < length(valores, int) - i - 1; j++) {
      if (valores[j] > valores[j + 1]) {
        int temp = valores[j];
        valores[j] = valores[j + 1];
        valores[j + 1] = temp;
      }
    }
  }

  for (int i = 0; i < length(valores, int); i++) {
    Serial.println(valores[i]);
  }
}

void loop() {
}
