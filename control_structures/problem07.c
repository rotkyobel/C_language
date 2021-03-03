// 7. Suma de los 10 primeros numeros pares

#include <stdio.h>

int main(){

  int i, suma = 0;

  for(i = 0; i <= 10; i += 2){ // i = i + 2
    suma += i;
  }

  printf("\nLa suma de los numero pares es: %i", suma);

  return 0;
}