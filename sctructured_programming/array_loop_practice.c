#include <stdio.h>

int main()
{

  int n;

  printf("Encontrar el numero mas grande de un arreglo\n");

  printf("\nTamanio del arreglo: ");
  scanf("%i", &n);

  printf("\nIngresa los valores:\n\n");

  int arr[n];
  int maxNum = 0;

  for (int i = 0; i < n; i++)
  {

    printf("Valor[%i]: ", i + 1);
    scanf("%i", &arr[i]);

    if (arr[i] > maxNum)
    {
      maxNum = arr[i];
    }
  }
  printf("\nEl numero mayor es: %i", maxNum);

  return 0;
}