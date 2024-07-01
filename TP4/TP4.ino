#define ROJO 9
#define AZUL 11
#define VERDE 10
#define LUZ A1
#define TEMP A0
#define MENSAJE(x, y, z) Serial.print(x); Serial.print(y); Serial.println(z);

void setup()
{
    pinMode(ROJO, OUTPUT);
    pinMode(VERDE, OUTPUT);
    pinMode(AZUL, OUTPUT);
    pinMode(LUZ, INPUT);
    pinMode(TEMP, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int luzActual = map(analogRead(LUZ), 1, 310, 0, 100);
    int luzLed = map(analogRead(LUZ), 1, 310, 100, 0);
    int intensidad = analogRead(TEMP);
    float senial = intensidad * 5.0 / 1024;
    float temperatura = senial * 100 - 50;
    
    if(luzLed >= 30 && luzLed <= 70){
        if(temperatura > 90){
            digitalWrite(AZUL, LOW);
            digitalWrite(VERDE, LOW);
            digitalWrite(ROJO, HIGH);
        }
        else if(temperatura < 18){
            digitalWrite(ROJO, LOW);
            digitalWrite(VERDE, LOW);
            digitalWrite(AZUL, HIGH);
        }
        else if(temperatura >= 18 && temperatura <= 90){
            digitalWrite(AZUL, LOW);
            digitalWrite(ROJO, LOW);
            digitalWrite(VERDE, HIGH);
        }
    }
    else{
        digitalWrite(AZUL, LOW);
        digitalWrite(ROJO, LOW);
        digitalWrite(VERDE, LOW);
    }
    
    MENSAJE("El nivel de luz actual es del ", luzActual, '%');
    MENSAJE("La temperatura actual es de ", temperatura, " °C");
