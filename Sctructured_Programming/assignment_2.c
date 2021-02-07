#include <stdio.h>

int main()
{

  int x;

  printf("Ingrese el valor de x: ");
  scanf("%i", &x);

  x %= 5;
  x++;

  printf("Modulo: %i\n", x);

  return 0;
}