// 4. Hacer un programa que pida por pantalla un número del 1 al 10 y mediante
// un procedimiento muestre por pantalla el número escrito en letras.

#include <stdio.h>
void num();

int main() {

  num();

  return 0;
}

void num() {
  int numero;

  printf("\nDigite un numero (1 - 10): ");
  scanf("%i", &numero);

  switch(numero) {
    case 1: printf("Uno"); break;
    case 2: printf("Dos"); break;
    case 3: printf("Tres"); break;
    case 4: printf("Cuatro"); break;
    case 5: printf("Cinco"); break;
    case 6: printf("Seis"); break;
    case 7: printf("Siete"); break;
    case 8: printf("Ocho"); break;
    case 9: printf("Nueve"); break;
    case 10: printf("Dies"); break;
    default: num();
  }
}