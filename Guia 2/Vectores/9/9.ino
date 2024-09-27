#define RED_PIN 9
#define GREEN_PIN 11
#define BLUE_PIN 10
#define length(vec, tipo) sizeof(vec) / sizeof(tipo)

int L1[] = {122, 234, 21};
int L2[] = {33, 53, 155};
int L3[] = {255, 0, 0};

int *colores[] = {L1, L2, L3};

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < length(colores, int*); i++) {
    analogWrite(RED_PIN, colores[i][0]);
    analogWrite(GREEN_PIN, colores[i][1]);
    analogWrite(BLUE_PIN, colores[i][2]);
    delay(1000);  
  }
}
