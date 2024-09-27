#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int valores[] = {2, 6, 10, 11};

void setup() {
  Serial.begin(9600);
  
  for (int i = 0; i < length(valores, int); i++) {
    for (int j = 1; j <= 5; j++) {
      Serial.print("Multiplo ");
      Serial.print(j);
      Serial.print(" de ");
      Serial.print(valores[i]);
      Serial.print(": ");
      Serial.println(valores[i] * j);
    }
    Serial.println(); 
  }
}

void loop() {
}

