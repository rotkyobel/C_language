/*
TODO: Problema 12: Seleccionar un tipo de vehiculo e indicar el peaje a pagar segun un valor numerico.
* 1 - Turismo, peaje = $500
* 2 - Autobus, peaje = $3000
* 3 - Motocicleta, peaje = $300
* Caso contrario - Vehiculo no autorizado
*/

#include <stdio.h>

int main()
{

  int type;

  printf("Debe pagar el peaje\n");
  printf("1 - Turismo\n");
  printf("2 - Autobus\n");
  printf("3 - Motocicleta\n");
  printf("4 - Otros\n");

  printf("\nIndique que tipo de vehiculo tiene ud (1-4): ");
  scanf("%i", &type);

  switch (type)
  {
  case 1:
    printf("Le corresponde pagar $500");
    break;
  case 2:
    printf("Le corresponde pagar $3000");
    break;
  case 3:
    printf("Le corresponde pagar $300");
    break;
  default:
    printf("Vehiculo no autorizado");
    break;
  }

  return 0;
}