

// macros para mensajes acortados
#define seguro "área segura"
#define movimiento "movimiento detectado"
#define alerta "proximidad detectada"



// configuración inicial
void setup() {
  Serial.begin(9600); // iniciar comunicación serial a 9600 baudios

  // configuración de pines como entradas y salidas
  pinMode(pir_pin, INPUT);
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(led_r_pin, OUTPUT);
  pinMode(led_g_pin, OUTPUT);
  pinMode(led_b_pin, OUTPUT);
  pinMode(buzzer_pin, OUTPUT);

  // asegurarse de que el led esté apagado inicialmente
  digitalWrite(led_r_pin, LOW);
  digitalWrite(led_g_pin, LOW);
  digitalWrite(led_b_pin, LOW);
  digitalWrite(buzzer_pin, LOW);
}

// función para medir la distancia
long measure_distance() {
  // envía un pulso de 10µs al trig
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  // lee el tiempo del pulso de retorno
  long duration = pulseIn(echo_pin, HIGH);

  // calcula la distancia en centímetros
  long distance = (duration / 2) / 29.1;
  return distance;
}

// función principal
void loop() {
  // leer el valor del sensor pir
  int pir_value = digitalRead(pir_pin);

  // medir la distancia
  long distance = measure_distance();

  if (pir_value == HIGH) {
    // hay movimiento detectado
    Serial.println(movimiento);
    if (distance < distance_threshold) {
      // distancia menor al umbral
      Serial.println(alerta);
      // encender led rojo y activar buzzer
      digitalWrite(led_r_pin, HIGH);
      digitalWrite(led_g_pin, LOW);
      digitalWrite(led_b_pin, LOW);
      tone(buzzer_pin, 1000); // tono alto
    } else {
      // movimiento pero distancia segura
      Serial.println(movimiento);
      // encender led amarillo y buzzer con tono bajo
      digitalWrite(led_r_pin, HIGH);
      digitalWrite(led_g_pin, HIGH);
      digitalWrite(led_b_pin, LOW);
      tone(buzzer_pin, 500); // tono bajo
    }
  } else {
    // no hay movimiento detectado
    Serial.println(seguro);
    // encender led verde y apagar buzzer
    digitalWrite(led_r_pin, LOW);
    digitalWrite(led_g_pin, HIGH);
    digitalWrite(led_b_pin, LOW);
    noTone(buzzer_pin);
  }

  // esperar un tiempo antes de la siguiente lectura
  delay(500);
}
