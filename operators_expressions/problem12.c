// 12. Calcular la media geometrica de tres numeros.

#include <stdio.h>
#include <math.h>

int main()
{

  float n1, n2, n3, media;

  printf("Calculando la media geometrica de tres numeros");

  printf("Ingrese los tres numeros: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  media = pow((n1 * n2 * n3), (1 / 3.));

  printf("La media geometrica es: %.2f", media);

  return 0;
}