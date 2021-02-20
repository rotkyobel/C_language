// Problem 05: Calcular el mayor de dos numeros leidos del teclado

#include <stdio.h>

int main()
{

  int n1, n2;

  printf("Digite dos numeros: ");
  scanf("%i %i", &n1, &n2);

  if (n1 > n2)
  {
    printf("El mayor es: %i", n1);
  }
  else if (n1 < n2)
  {
    printf("El mayor es: %i", n2);
  }
  else
  {
    printf("Ambos numeros son iguales");
  }

  return 0;
}