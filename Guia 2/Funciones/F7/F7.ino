setup() {
 
  Serial.begin(9600);
  
  int ledPin = 13;
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, HIGH);

  int numeros[] = {1, 2, 3, 4, 5};
  int cantidad = 5;

  incrementarNumeros(numeros, cantidad);

  for (int i = 0; i < cantidad; i++) {
    Serial.println(numeros[i]);
  }
}

void loop() {
  
}

void incrementarNumeros(int numeros[], int cantidad) {
  for (int i = 0; i < cantidad; i++) {
    numeros[i] += 1;
  }
}


    
}
