#include <stdio.h>

int changeFunction(char option, float value)
{

  float converted;

  if (option == 'S' || option == 's')
  {
    converted = value * 3.65;

    printf("%.2f Dolares es equivalente a %.2f Soles", value, converted);
  }
  else if (option == 'D' || option == 'd')
  {
    converted = value / 3.65;
    printf("%.2f Soles es equivalente a %.2f Dolares", value, converted);
  }
  else
  {
    printf("Ingrese una opcion valida");
  }
}

int main()
{

  char choose;
  float amount;

  printf("Vamos a convertir cantidades de dinero!\n\n");

  printf("Si quieres convertir de dolares a soles, presiona S\n");
  printf("Si quieres convertir de soles a dolares, presioan D\n");

  printf("\nIngrese su opcion: ");
  scanf("%c", &choose);

  printf("\nIngresa la cantidad de dinero que quieres convertir: ");
  scanf("%f", &amount);

  int wantToChange = changeFunction(choose, amount);

  return 0;
}