// 6. Calcular la media aritmetica de 3 números.

#include <stdio.h>

int main()
{

  printf("Vamos a calcular la media aritmetica de 3 numeros\n");

  int a, b, c, media;

  printf("\nIngresa los numeros: ");
  scanf("%i %i %i", &a, &b, &c);

  media = (a + b + c) / 3;

  printf("\nLa media aritmetica de los 3 numeros es: %i\n", media);

  return 0;
}