// Problema 02: Comprobar si un numero es positivo o negativo

#include <stdio.h>

int main()
{

  float num;

  printf("Digite un numero: ");
  scanf("%f", &num);

  if (num > 0)
  {
    printf("El numero es positivo");
  }
  else if (num < 0)
  {
    printf("El numero es negativo");
  }
  else
  {
    printf("El numero es neutro (0)");
  }

  return 0;
}