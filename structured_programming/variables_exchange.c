#include <stdio.h>

int main()
{

  int x;
  int y;
  int z;

  printf("Ingresa el valor de x: ");
  scanf("%i", &x);

  printf("Ingresa el valor de y: ");
  scanf("%i", &y);

  z = x;
  x = y;
  y = z;

  printf("El valor intercambiado de la variable x es: %i\n", x);
  printf("El valor intercambiado de la variable y es: %i\n", y);

  return 0;
}