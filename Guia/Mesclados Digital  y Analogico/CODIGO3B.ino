
int ROJO = 9;
int VERDE = 10;
int AZUL = 11;
int BOTON = 2;
int POTENCIOMETRO = A0;

bool luzOn = false;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(BOTON, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BOTON) == LOW) {
    luzOn = !luzOn;
    delay(200); // Evita rebotes del botón
  }

  if (luzOn) {
    int valorPote = analogRead(POTENCIOMETRO);
    
    if (valorPote < 341) {
      // Rango 1: Rojo a amarillo
      int rojo = 255;
      int verde = map(valorPote, 0, 340, 0, 255);
      int azul = 0;
      
      analogWrite(ROJO, rojo);
      analogWrite(VERDE, verde);
      analogWrite(AZUL, azul);
    } else if (valorPote < 682) {
      // Rango 2: Amarillo a verde
      int rojo = map(valorPote, 341, 681, 255, 0);
      int verde = 255;
      int azul = 0;
      
      analogWrite(ROJO, rojo);
      analogWrite(VERDE, verde);
      analogWrite(AZUL, azul);
    } else {
      // Rango 3: Verde a azul
      int rojo = 0;
      int verde = 255;
      int azul = map(valorPote, 682, 1023, 0, 255);
      
      analogWrite(ROJO, rojo);
      analogWrite(VERDE, verde);
      analogWrite(AZUL, azul);
    }
  } else {
    analogWrite(ROJO, 0);
    analogWrite(VERDE, 0);
    analogWrite(AZUL, 0);
  }
}
