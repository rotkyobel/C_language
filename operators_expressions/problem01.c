// 1. Pedir 2 números al usuario y sumarlos, restarlos, multiplicarlos y dividirlos.

#include <stdio.h>

int main()
{

  int n1, n2, sum = 0, sub = 0, mul = 0, div = 0;

  // printf("Digite el primer numero: ");
  // scanf("%i", &n1);

  // printf("Digite el segundo numero: ");
  // scanf("%i", &n2);

  printf("Digite dos numeros: ");
  scanf("%i %i", &n1, &n2);

  sum = n1 + n2;
  sub = n1 - n2;
  mul = n1 * n2;
  div = n1 / n2;

  printf("\nLa suma es: %i", sum);
  printf("\nLa resta es: %i", sub);
  printf("\nLa multiplicacion es: %i", mul);
  printf("\nLa division es: %i", div);

  return 0;
}