// 1. Determinar si un numero es par

#include <stdio.h>
void check();

int main() {

  int numero, x;

  printf("Digite un numero: ");
  scanf("%i", &numero);

  check(numero);

  return 0;
}

void check(int num) {
  if(num % 2 == 0) {
    printf("\nEl numero es par");
  }
  else {
    printf("\nEl numero es impar");
  }
}