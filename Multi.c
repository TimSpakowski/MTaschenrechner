#include<stdio.h>

float eingabeZahl() {
  
  float zahl;
  
  printf("Geben sie 2 Zahlen an\n");
  printf("Zahl: \n");
  scanf("%f", &zahl);
  return zahl;
  
  
  
}

float multipliziere(float zahl1, float zahl2) {
  
  float ergebnis;
  return(zahl1 * zahl2);
  
}

void ausgabeErgebnis(float ergebnis) {
  
  printf("Das Ergebnis ist: %f\n", ergebnis);
  
}

int main() {
  
  float zahl1 = eingabeZahl();
  float zahl2 = eingabeZahl();
  float ergebnis = multipliziere(zahl1, zahl2);
  ausgabeErgebnis(ergebnis);
  return 0;
  
}
