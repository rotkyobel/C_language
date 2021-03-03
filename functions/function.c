#include <stdio.h>
// Prototipos

int main() {

  int a, b;

  printf("Digite dos numeros: ");
  scanf("%i %i", &a, &b);

  printf("La suma es: %i", sumar(a, b));

  return 0;
}

int sumar(int n1, int n2) {
  int suma = 0;
  suma = n1 + n2;
  return suma;
}