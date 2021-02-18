#include <stdio.h>
#include "operators.h"

int main()
{

  printf("Librerias!\n");

  float firstValue = 10;
  float secondValue = 15;

  float result;
  int option;

  printf("Soy una calculadora!\n\n");
  printf("Que operacion deseas realizar?\n\n");

  printf("1. Suma\n");
  printf("2. Resta\n");
  printf("3. Multiplicacion\n");
  printf("4. Division\n\n");

  printf("Elige una opcion: ");
  scanf("%i", &option);

  switch (option)
  {
  case 1:
    result = addition(firstValue, secondValue);
    break;
  case 2:
    result = substraction(firstValue, secondValue);
    break;
  case 3:
    result = multiplication(firstValue, secondValue);
    break;
  case 4:
    result = division(firstValue, secondValue);
    break;
  }

  printf("El resultado de la operacion es: %.2f\n", result);

  return 0;
}