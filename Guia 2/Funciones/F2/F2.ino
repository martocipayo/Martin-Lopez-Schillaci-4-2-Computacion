#define TRIG_PIN 9
#define ECHO_PIN 10

void setup() {
  Serial.begin(9600);
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.println("Setup completo");
}

void loop() {
  Serial.println("Midiendo distancia...");
  Serial.println(obtenerDistancia());
  delay(1000);
}

long obtenerDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duracion = pulseIn(ECHO_PIN, HIGH);
  long distancia = duracion * 0.034 / 2;
  Serial.print("Duración: ");
  Serial.println(duracion);
  Serial.print("Distancia: ");
  Serial.println(distancia);
  return distancia;
}
