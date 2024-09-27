#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int valores[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

void setup() {
  Serial.begin(9600);
  
  int suma = 0;
  float media = 0;

  for (int i = 0; i < length(valores, int); i++) {
    suma += valores[i];
  }
  
  media = (float)suma / length(valores, int);
  
  Serial.print("La media es: ");
  Serial.println(media);
}

void loop() {
}
