#include <stdio.h>

int main()
{

  int x;

  printf("Ingrese el valor de x: ");
  scanf("%i", &x);

  x += (2 * x);

  printf("Resultado: %i\n", x);

  return 0;
}