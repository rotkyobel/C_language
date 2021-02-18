#include <stdio.h>

int main()
{
  printf("Dame dos numeros y te dire cual es el menor de ellos! \n");

  int x, y;

  printf("Ingresa el primer numero: ");
  scanf("%i", &x);

  printf("Ingresa el segundo numero: ");
  scanf("%i", &y);

  if (x < y)
    printf("El numero menor es: %i\n", x);
  else
    printf("El numero menor es: %i\n", y);

  return 0;
}