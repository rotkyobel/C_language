#include <stdio.h>

int powFunction(int base, int exponent)
{

  int resultado = 1;

  for (int i = 1; i <= exponent; i++)
  {
    resultado = resultado * base;
  }
  return resultado;
}

int main()
{

  int a, b;

  printf("Potencia de un numero: \n\n");

  printf("Ingresa la base: ");
  scanf("%i", &a);

  printf("Ingresa el exponente: ");
  scanf("%i", &b);

  int res = powFunction(a, b);

  printf("El resultado es: %i\n", res);

  return 0;
}