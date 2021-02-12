#include <stdio.h>

int main()
{

  float valA, valB, valC;

  valA = 5;
  valB = valC = 10;

  if (valA < valB && valB < valC)
    printf("Se cumplieron las dos condiciones \n");
  else
    printf("No se cumplieron las dos condiciones \n");

  if (valA > valB || valA <= valC)
    printf("Se cumplio por lo menos una de las dos condiciones \n");
  else
    printf("No se cumplieron las condiciones \n");

  return 0;
}