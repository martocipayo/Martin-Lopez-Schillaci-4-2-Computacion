void setup() {
  Serial.begin(9600);
  int vector[5];
  llenarVectorConMultiplosDe10(vector, 5);
  for (int i = 0; i < 5; i++) {
    Serial.println(vector[i]);
  }
}

void loop() {
  
}

void llenarVectorConMultiplosDe10(int* vector, int tamano) {
  for (int i = 0; i < tamano; i++) {
    vector[i] = (random(0, 11) * 10); 
  }
}
