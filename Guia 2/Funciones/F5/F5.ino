#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define bot 9

int pines[] = {a, b, c, d, e, f, g};

int numeros0[] = {1, 1, 1, 1, 1, 1, 0}; // 0
int numeros1[] = {0, 1, 1, 0, 0, 0, 0}; // 1
int numeros2[] = {1, 1, 0, 1, 1, 0, 1}; // 2
int numeros3[] = {1, 1, 1, 1, 0, 0, 1}; // 3
int numeros4[] = {0, 1, 1, 0, 0, 1, 1}; // 4
int numeros5[] = {1, 0, 1, 1, 0, 1, 1}; // 5
int numeros6[] = {1, 0, 1, 1, 1, 1, 1}; // 6
int* numeros[] = {numeros0, numeros1, numeros2, numeros3, numeros4, numeros5, numeros6};

void setup() {
  randomSeed(analogRead(A2));
  pinMode(bot, INPUT_PULLUP); 
  for (int i = 0; i < 7; i++) {
    pinMode(pines[i], OUTPUT);
  }
}

void loop() {
  if (digitalRead(bot) == LOW) { 
    int dado = random(1, 7);
    
    for (int sufa = 0; sufa < 7; sufa++) {
      digitalWrite(pines[sufa], numeros[dado][sufa]);
    }

    delay(2000); 
    for (int sufa = 0; sufa < 7; sufa++) {
      digitalWrite(pines[sufa], LOW); 
    }
    
    delay(1000);
  }
}
