#include <stdio.h>

int main()
{

  int n;

  printf("Multiplicar todos los valores de un arreglo: \n");
  printf("Cuantos elementos quieres en tu arreglo?: ");
  scanf("%i", &n);

  int arr[n];
  int mul;

  printf("\nIngresa los valores: \n");

  for (int i = 0; i < n; i++)
  {
    printf("Valor[%i]: ", i + 1);
    scanf("%i", &arr[i]);

    if (i == 0)
    {
      mul = arr[i];
    }
    else
    {
      mul *= arr[i];
    }
  }

  printf("\nEl resultado es: %i\n", mul);

  return 0;
}