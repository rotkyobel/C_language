// 13. Hacer un programa que imprima la suma de todos los numeros pares que hay desde
// 1 hasta n, y diga cuantos numero hay

#include <stdio.h>

int main() {

  int i, numero, suma = 0, pares = 0;

  printf("Digite un numero: ");
  scanf("%i", &numero);

  for(i = 0; i <= numero; i++) {
    if(i % 2 == 0) {
      suma += i;
      pares++;
    }
  }
  printf("La suma es: %i y hay %i numeros", suma, pares);

  return 0;
}