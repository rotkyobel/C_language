/*
  2. Consideremos una funcion que recibe un numero n e imprime los numeros del
     n al 1. Con recursividad
*/

#include <stdio.h>
int previous(int n);

int main() {

  int numero, i;

  printf("Digite un numero: ");
  scanf("%i", &numero);

  for(int i = numero; i >= 1; i--) {
    printf("%i ", previous(i));
  }

  return 0;
}

/*
  6 5 4 3 2 1
  6 p5
  5 p4
  4 p3
  3 p2
  2 p1
  1 1
*/

int previous(int n) {
  if(n == 1) {
    return 1;
  }else {
    return (previous(n - 1) + 1);
  }
}