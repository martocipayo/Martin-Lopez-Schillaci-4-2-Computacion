)#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 9, 10, 11, 12);

void setup() {
  lcd.begin(16, 2);
  
  bienvenida();
  
  delay(2000);
  
  inicioJuego();
  
  delay(3000);
  
  finJuego();
  
  delay(2000);
  
  mostrarPuntuacion();
  
  delay(3000);
}

void loop() {
}

void bienvenida() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido!");
  lcd.setCursor(0, 1);
  lcd.print("Iniciando...");
}

void inicioJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Inicio de juego");
  lcd.setCursor(0, 1);
  lcd.print("Suerte!");
}

void finJuego() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Fin del juego!");
  lcd.setCursor(0, 1);
  lcd.print("Gracias por jugar");
}

void mostrarPuntuacion() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Puntuacion:");
  
  int puntuacion = random(0, 101);
  
  lcd.setCursor(0, 1);
  lcd.print(puntuacion);
}
