#include <stdio.h>

int main()
{

  printf("Condicion if\n");

  float valA, valB, valC;

  valA = valB = 100;

  printf("Primera condicion\n");

  if (valA == valB)
    printf("Ambos valores son iguales\n");

  printf("Segunda condicion\n");

  if (valA == valB)
  {
    printf("Ambos valores son iguales\n");
    valC = valA + valB;
    printf("Ademas la suma de ambos numeros es: %.0f", valC);
  }

  return 0;
}