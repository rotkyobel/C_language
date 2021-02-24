// TODO 02: Digite un numero, si el numero supera a 10, multiplique los 10 primeros numeros, sino sumelos.

#include <stdio.h>

int main()
{

  int i, n, res;

  printf("Digite un numero: ");
  scanf("%i", &n);

  i = 1;

  if (n <= 10)
  {
    res = 0;
    while (i <= n)
    {
      res = res + i;
      i++;
    }
    printf("EL resultado es: %i", res);
  }
  else
  {
    res = 1;
    while (i <= 10)
    {
      res = res + i;
      i++;
    }
    printf("EL resultado es: %i", res);
  }

  return 0;
}