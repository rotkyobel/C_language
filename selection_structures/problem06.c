// Problema 06: Ingrese un numero y calcule su raiz cuadrada. Si el numero es negativo imprimir el numero y un mensaje que diga "tiene raiz imaginaria"

#include <stdio.h>

int main()
{

  int num;

  printf("Vamos a calcular la raiz cuadrada de un numero!\n\n");
  printf("Digite un numero: ");
  scanf("%i", &num);

  if (num >= 0)
  {
    int res = pow(num, 1 / 2.);
    printf("La raiz cuadrada de %i es: %i", num, res);
  }
  else
  {
    printf("El numero %i tiene raiz imaginaria", num);
  }

  return 0;
}