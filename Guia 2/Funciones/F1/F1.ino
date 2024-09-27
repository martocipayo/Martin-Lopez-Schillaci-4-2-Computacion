#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247

void setup() {
  
}

void loop() {
  tocarMelodia1();
  delay(2000);
  tocarMelodia2();
  delay(2000);
}

void tocarMelodia1() {
  int melodia[] = {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4};
  int duracionNotas[] = {4, 8, 8, 4, 4, 4, 4, 4};
  for (int estaNota = 0; estaNota < 8; estaNota++) {
    int duracionNota = 1000 / duracionNotas[estaNota];
    tone(8, melodia[estaNota], duracionNota);
    delay(duracionNota * 1.30);
  }
}

void tocarMelodia2() {
  int melodia[] = {NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_E4};
  int duracionNotas[] = {8, 8, 8, 8, 8, 8, 8};
  for (int estaNota = 0; estaNota < 7; estaNota++) {
    int duracionNota = 1000 / duracionNotas[estaNota];
    tone(8, melodia[estaNota], duracionNota);
    delay(duracionNota * 1.30);
  }
}
