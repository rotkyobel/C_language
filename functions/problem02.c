// 2. Hacer un programa que realice la media aritmetica de 2 numeros

#include <stdio.h>
void media();

int main() {

  int x, y;

  printf("Vamos a hallar la media aritmetica de dos numeros!!\n\n");

  printf("Digite dos numeros: ");
  scanf("%i %i", &x, &y);

  media(x, y);

  return 0;
}

void media(int n1, int n2) {
  int res = (n1 + n2) / 2;
  printf("\nLa media arirmetica de los dos numeros es: %i", res);
}