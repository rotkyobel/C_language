// Problema 04: Determinar si un numero es par o impar

#include <stdio.h>

int main()
{

  int num;

  printf("Digite un numero: ");
  scanf("%i", &num);

  if (num % 2 == 0)
  {
    printf("El numero es par");
  }
  if (num % 2 != 0)
  {
    printf("El numero es impar");
  }

  return 0;
}