#include<stdio.h>

float eingabeZahl() {
  
  float zahl1, zahl2;
  
  printf("Geben sie 2 Zahlen an\n");
  printf("Zahl Nummer 1: \n");
  scanf("%f", &zahl1);
  printf("Zahl Nummer 2: \n");
  scanf("%f", &zahl2);
  
}

float multipliziere(float zahl1, float zahl2) {
  
  float ergebnis;
  ergebnis = zahl1 * zahl2;
  
}

void ausgabeErgebnis(float ergebnis) {
  
  printf("Das Ergebnis ist: %f", ergebnis);
  
}

int main() {
  
  eingabeZahl();
  multipliziere(zahl1, zahl2);
  ausgabeErgebnis(ergebnis);
  
}
