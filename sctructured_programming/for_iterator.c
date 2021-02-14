#include <stdio.h>
#include <stdlib.h>

int main()
{

  printf("Iteradores for \n");

  int upperLim, bottomLim;

  printf("Imprimir en orden descendiente \n");

  printf("Ingresar limite superior: ");
  scanf("%i", &upperLim);

  printf("Ingresar limite inferior: ");
  scanf("%i", &bottomLim);

  for (int i = upperLim; i >= bottomLim; i--)
  {
    printf("Numero: %i \n", i);
  }

  return 0;
}