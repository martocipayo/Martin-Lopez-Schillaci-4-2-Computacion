
void setup() {
  Serial.begin(9600); // iniciar comunicación serial a 9600 baudios

  // configuración de pines como salidas
  pinMode(LED_R_PIN, OUTPUT);
  pinMode(LED_G_PIN, OUTPUT);
  pinMode(LED_B_PIN, OUTPUT);

  // asegurarse de que el led esté apagado inicialmente
  digitalWrite(LED_R_PIN, LOW);
  digitalWrite(LED_G_PIN, LOW);
  digitalWrite(LED_B_PIN, LOW);
}

// función principal
void loop() {
  // leer el valor del sensor de luz (ldr)
  int ldrValue = analogRead(LDR_PIN);
  
  // leer el valor del sensor de temperatura (tmp35)
  int tmpValue = analogRead(TMP35_PIN);
  
  // convertir el valor analógico a grados celsius
  float voltage = tmpValue * (5.0 / 1023.0); // convertir a voltaje
  float temperatureC = (voltage - 0.5) * 100.0; // convertir a temperatura

  // mostrar los valores en el monitor serial
  Serial.print(LUZ_MSG);
  Serial.println(ldrValue);
  Serial.print(TEMP_MSG);
  Serial.print(temperatureC);
  Serial.println(GRADOS);

  // mapear el valor del ldr a un porcentaje invertido
  int lightPercentage = map(ldrValue, 0, 1023, 100, 0);

  // controlar el led rgb basado en la temperatura y luz ambiental
  if (lightPercentage >= 30 && lightPercentage <= 70) { // 30% a 70% de luz
    if (temperatureC > 90) {
      // encender led rojo
      digitalWrite(LED_R_PIN, HIGH);
      digitalWrite(LED_G_PIN, LOW);
      digitalWrite(LED_B_PIN, LOW);
    } else if (temperatureC < 18) {
      // encender led azul
      digitalWrite(LED_R_PIN, LOW);
      digitalWrite(LED_G_PIN, LOW);
      digitalWrite(LED_B_PIN, HIGH);
    } else {
      // encender led verde
      digitalWrite(LED_R_PIN, LOW);
      digitalWrite(LED_G_PIN, HIGH);
      digitalWrite(LED_B_PIN, LOW);
    }
  } else {
    // apagar el led si la luz ambiental no está entre 30% y 70%
    digitalWrite(LED_R_PIN, LOW);
    digitalWrite(LED_G_PIN, LOW);
    digitalWrite(LED_B_PIN, LOW);
  }

  // esperar un tiempo antes de la siguiente lectura
  delay(1000);
}
