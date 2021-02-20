// Problema 10: Una distribuidora de motocicletas tiene una promocion de fin de año que consiste en lo siguiente. Las motos Honda tienen un descuento del 5%, las Yamaha del 8% y las Suzuki del 10%, las otras marcas 2%.

#include <stdio.h>

int main()
{

  float precio, precio_final;
  char marca[50];

  printf("Las siguientes marcas de moto estan en oferta: Honda, Yamaha, Suzuki y el resto de marcas\n");

  printf("Ingresa el nombre de la marca y el precio normal. Y averigua cuanto tendras que pagar aplicando el descuento\n\n");

  printf("Ingrese la marca de la moto: ");
  gets(marca);

  printf("Ingrese el precio de la moto: ");
  scanf("%f", &precio);

  if (strcmp(marca, "honda") == 0)
  {
    precio_final = precio - (precio * 5 / 100);
    printf("\nEl precio final de la moto marca %s es %.2f", marca, precio_final);
  }
  else if (strcmp(marca, "yamaha") == 0)
  {
    precio_final = precio - (precio * 8 / 100);
    printf("\nEl precio final de la moto marca %s es %.2f", marca, precio_final);
  }
  else if (strcmp(marca, "suzuki") == 0)
  {
    precio_final = precio - (precio * 10 / 100);
    printf("\nEl precio final de la moto marca %s es %.2f", marca, precio_final);
  }
  else
  {
    precio_final = precio - (precio * 2 / 100);
    printf("\nEl precio final de la moto marca %s es %.2f", marca, precio_final);
  }

  return 0;
}