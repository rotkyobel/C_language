#include <stdio.h>

int main()
{

  printf("Apuntadores!\n");

  float val;

  float *apVal;

  apVal = &val;

  *apVal = 3.1416;

  printf("El valor de la variable val es: %.4f\n", val);

  return 0;
}