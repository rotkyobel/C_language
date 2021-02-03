// Directivas del Preprocesador y Variables

#include <stdio.h> // Libreria

#define PI 3.1416 // Macro

int y = 5; // Variable Global

int main(void)
{
  int x = 10; // Variable Local
  float suma = PI + x;
  printf("La suma es: %.4f", suma);
  return 0;
}
