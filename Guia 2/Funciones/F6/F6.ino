#define PIN1 2
#define PIN2 3
#define PIN3 4
#define PIN4 5

void Pines() {
    int pines[] = {PIN1, PIN2, PIN3, PIN4};
    int tamano = sizeof(pines) / sizeof(pines[0]);
    for (int i = 0; i < tamaño; i++) {
        pinMode(pines[i], OUTPUT); 
        digitalWrite(pines[i], HIGH); 
    }
}

void setup() {
    Pines(); 
}

void loop() {
}