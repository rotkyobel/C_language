// TODO 03: Multiplos de 3 desde 1 hasta n

#include <stdio.h>

int main()
{

  int n, i;

  printf("Digite el total de numeros a comprobar: ");
  scanf("%i", &n);

  i = 1;

  while (i <= n)
  {

    if (i % 3 == 0)
    {
      printf("%i ", i);
    }

    i++;
  }

  return 0;
}