// 6. Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un
// número cualquiera por pantalla, el número se pedira en el programa principal.
// Usar procedimiento

#include <stdio.h>
void tabla();

int main() {

  int numero;

  printf("\nDe que numero quieres saber la tabla de multiplicar: ");
  scanf("%i", &numero);

  tabla(numero);

  return 0;
}

void tabla(int num) {
  for(int i = 1; i <= 20; i++) {
    int res = num * i;
    printf("%i x %i = %i\n", num, i, res);
  }
}