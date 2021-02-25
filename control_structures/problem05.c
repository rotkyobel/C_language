// TODO 05: Sumar 1-2+3-4...n
/*
  * impares (+)
  * pares (-)

  * suma_pares = -2-4-6...
  * suma_impares = 1+3+5...

  * suma = suma_pares + suma_impares

  * 1-2+3-4+5-6
  * -1+3-4+5-6
  * 2-4+5-6
  * -2+5-6
  * 3-6
  * -3
 */

#include <stdio.h>

int main()
{

  int numero, i = 1, suma = 0;

  printf("Digite un numero: ");
  scanf("%i", &numero);

  while (i <= numero)
  {
    if (i % 2 == 0)
    {
      suma -= i;
    }
    else
    {
      suma += i;
    }
    i++;
  }
  printf("El resultado es: %i\n", suma);
  return 0;
}