bool esMultiplo(int numero, int divisor) {
    return (numero % divisor == 0);
}


void imprimirResultado(int numero, int divisor) {
    if (esMultiplo(numero, divisor)) {
        Serial.print(numero);
        Serial.print(" es múltiplo de ");
        Serial.println(divisor);
    } else {
        Serial.print(numero);
        Serial.print(" no es múltiplo de ");
        Serial.println(divisor);
    }
}

void setup() {
   
    Serial.begin(9600);

    
    imprimirResultado(20, 5);
    imprimirResultado(21, 5);
}

void loop() {
  
}
