// 2. Convertir grados Celcius a grados Fahrenheit.

#include <stdio.h>

int main()
{

  float celcius, fahrenheit;

  printf("Ingrese la cantidad en grados celcius: ");
  scanf("%f", &celcius);

  fahrenheit = (celcius * 9 / 5) + 32;

  printf("%.2f Grados Celcius es equivalente a %.2f Grados Fahrenheit.", celcius, fahrenheit);

  return 0;
}