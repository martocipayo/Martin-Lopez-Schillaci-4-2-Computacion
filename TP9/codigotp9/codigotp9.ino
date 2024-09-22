#define PIN_BOTON 0 
#define PIN_BUZZER 8  
#define PINES_DISPLAY1 {2, 3, 4, 5, 6, 7, 9} 
#define PINES_DISPLAY2 {10, 11, 12, 13, A1, A2, A3}
bool boton = false;

int pinesDisplay1[] = PINES_DISPLAY1;
int pinesDisplay2[] = PINES_DISPLAY2;

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(pinesDisplay1[i], OUTPUT);
    pinMode(pinesDisplay2[i], OUTPUT);
  }
  pinMode(PIN_BOTON, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
}

void loop() {
  if (digitalRead(PIN_BOTON) == LOW){
    boton = !boton;
    delay(50);
  }
  if (boton == true) {
    for (int i = 0; i < 10; i++) {
      mostrarNumero(pinesDisplay1, random(1, 7));
      mostrarNumero(pinesDisplay2, random(1, 7));
      delay(100);
    }
    
    int dado1 = random(1, 7);
    int dado2 = random(1, 7);
    mostrarNumero(pinesDisplay1, dado1);
    mostrarNumero(pinesDisplay2, dado2);

    if (dado1 + dado2 == 7) {
      tone(PIN_BUZZER, 1000, 500); 
    }
    boton = false;
  }
}

void mostrarNumero(int* pinesDisplay, int numero) {
 
  for (int i = 0; i < 7; i++) {
    digitalWrite(pinesDisplay[i], LOW);
  }
  
  
  switch (numero) {
    case 1:
      digitalWrite(pinesDisplay[1], HIGH);
      digitalWrite(pinesDisplay[2], HIGH);
      break;
    case 2:
      digitalWrite(pinesDisplay[0], HIGH);
      digitalWrite(pinesDisplay[1], HIGH);
      digitalWrite(pinesDisplay[6], HIGH);
      digitalWrite(pinesDisplay[4], HIGH);
      digitalWrite(pinesDisplay[3], HIGH);
      break;
    case 3:
      digitalWrite(pinesDisplay[0], HIGH);
      digitalWrite(pinesDisplay[1], HIGH);
      digitalWrite(pinesDisplay[6], HIGH);
      digitalWrite(pinesDisplay[2], HIGH);
      digitalWrite(pinesDisplay[3], HIGH);
      break;
    case 4:
      digitalWrite(pinesDisplay[5], HIGH);
      digitalWrite(pinesDisplay[6], HIGH);
      digitalWrite(pinesDisplay[1], HIGH);
      digitalWrite(pinesDisplay[2], HIGH);
      break;
    case 5:
      digitalWrite(pinesDisplay[0], HIGH);
      digitalWrite(pinesDisplay[5], HIGH);
      digitalWrite(pinesDisplay[6], HIGH);
      digitalWrite(pinesDisplay[2], HIGH);
      digitalWrite(pinesDisplay[3], HIGH);
      break;
    case 6:
      digitalWrite(pinesDisplay[0], HIGH);
      digitalWrite(pinesDisplay[5], HIGH);
      digitalWrite(pinesDisplay[4], HIGH);
      digitalWrite(pinesDisplay[3], HIGH);
      digitalWrite(pinesDisplay[2], HIGH);
      digitalWrite(pinesDisplay[6], HIGH);
      break;
  }
}