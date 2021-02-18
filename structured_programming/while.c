#include <stdio.h>

int main()
{

  printf("Iterador while \n");

  int limit;

  printf("Ingresa un un numero: ");
  scanf("%i", &limit);

  int i = 1;

  while (i <= limit)
  {
    printf("El numero es igual a: %i \n", i);
    i++;
  }

  return 0;
}