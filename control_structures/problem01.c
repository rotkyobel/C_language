// TODO 01: Suma de los n primeros numeros

#include <stdio.h>

int main()
{

  int i, n, suma = 0;

  printf("Digite el total de numero a sumar: ");
  scanf("%i", &n);

  i = 1;

  while (i <= n)
  {
    suma += i; // suma = 1, 3, 6, 10, 15
    i++;       // 1 2 3 4 5
  }

  printf("\nLa suma es: %i", suma);

  return 0;
}