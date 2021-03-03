// 11. Hacer un programa que calcule la suma de factoriales

#include <stdio.h>

int main() {

  int i, numero, factorial = 1, suma = 0;

  printf("Digite el numero de factoriales a sumar: ");
  scanf("%i", &numero);

  for(i = 1; i <= numero; i++) {
    factorial *= i;
    suma += factorial;
  }

  printf("La suma es: %i", suma);

  return 0;
}