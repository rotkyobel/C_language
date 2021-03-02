// Problem 06: Sumar pares desde n hasta m

#include <stdio.h>

int main()
{

  int n, m, suma = 0;

  printf("Suma de pares entre dos numeros!!\n\n");

  printf("Digite el primer numero: ");
  scanf("%i", &n);

  printf("Digite el segundo numero: ");
  scanf("%i", &m);

  while (n <= m)
  {
    if (n % 2 == 0)
    {
      suma = suma + n;
    }
    n++;
  }
  printf("La suma de los pares entre los dos numeros es: %i\n", suma);

  return 0;
}