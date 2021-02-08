#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
  int integerA;
  float floatA;
  char letterA;

  printf("Ingrese el valor del entero A: ");
  scanf("%i", &integerA);

  printf("Ingrese el valor del float A: ");
  scanf("%f", &floatA);

  printf("Ingrese el valor del char A: \n");
  scanf("%c", &letterA);

  printf("El entero A es: %i\n", integerA);
  printf("El float A es: %f\n", floatA);
  printf("El char A es: %c\n", letterA);

  return 0;
}