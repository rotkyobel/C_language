// 4. Calcular la longitud de una circunferencia mediante el radio.

#include <stdio.h>
#include <math.h>

int main()
{

  float radio, longitud;

  printf("Ingrese el radio de la circunferencia: ");
  scanf("%f", &radio);

  longitud = (2 * M_PI) * radio;

  printf("La longitud de la circunferencia es: %.2f", longitud);

  return 0;
}