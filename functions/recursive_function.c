/*
  Recursividad: Una función recursiva es una función que se llama a si misma.
*/

#include <stdio.h>
long factorial(int n);

int main() {

  int numero;

  printf("Digite un numero: ");
  scanf("%i", &numero);

  printf("El factorial del numero es: %li", factorial(numero));

  return 0;
}

/*
  4! = 4 * 3!
  3! = 3 * 2!
  2! = 2 * 1!
  1! = 1
*/

long factorial(int n) {
  if(n <= 0) {
    return 1;
  }else {
    return (n * factorial(n - 1));
  }
}