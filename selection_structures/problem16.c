/*
  TODO Problema 16: Hacer un menu que considere las siguientes opciones:
  * Caso 1: Cubo de un numero
  * Caso 2: Numero par o impar
  * Caso 3: Salir
 */

#include <stdio.h>

int main()
{

  int opcion, numero;

  printf("Que quieres saber de un numero?\n");
  printf("\n1. El numero elevado al cubo.");
  printf("\n2. Si es numero par o impar");
  printf("\n3. Salir");
  printf("\n\nEliga una opcion: ");
  scanf("%i", &opcion);

  switch (opcion)
  {
  case 1:
    printf("Digite un numero: ");
    scanf("%i", &numero);

    numero = pow(numero, 3);

    printf("%i", numero);
    break;
  case 2:
    printf("Digite un numero: ");
    scanf("%i", &numero);

    if (numero % 2 == 0)
    {
      printf("El numero es par");
    }
    else
    {
      printf("El numero es impar");
    }
    break;
  case 3:
    break;

  default:
    printf("Digite una opcion valida");
    break;
  }

  return 0;
}