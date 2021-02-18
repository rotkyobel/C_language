#include <stdio.h>

int main()
{

  float fahrenheit;
  float to_celcius;

  printf("Ingrese la temperatura en Fahrenheit: ");
  scanf("%f", &fahrenheit);

  to_celcius = ((fahrenheit - 32) * 5) / 9;

  printf("La temperatura en Celcius es: %.4f\n", to_celcius);

  return 0;
}