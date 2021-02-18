#include <stdio.h>
#include <math.h>

int main()
{

  float radio;
  float altura;
  float pi = 3.1416;
  float volumen;
  float area;

  printf("Ingrese el radio del cilindro: ");
  scanf("%f", &radio);

  printf("Ingrese la altura del cilindro: ");
  scanf("%f", &altura);

  volumen = pi * pow(radio, 2) * altura;
  area = 2 * pi * radio * (altura + radio);

  printf("El volumen del cilindro es: %.2f\n", volumen);
  printf("El area del cilindro es: %.2f\n", area);

  return 0;
}