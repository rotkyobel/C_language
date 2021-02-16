#include <stdio.h>

int main()
{

  printf("Arreglos unidimensionales \n");

  int integerList[3];
  integerList[0] = 4;
  integerList[1] = 5;
  integerList[2] = 6;

  float floatList[] = {23.4, 34.5, 45.6, 21.8, 56.7};

  char charList[5];
  charList[0] = 'Y';
  charList[1] = 'O';
  charList[2] = 'B';
  charList[3] = 'E';
  charList[4] = 'L';

  printf("\n Primer entero: \t\t %i", integerList[0]);
  printf("\n Ultimo flotante: \t\t %.1f", floatList[4]);
  printf("\n Mi nombre: \t\t %c%c%c%c%c", charList[0], charList[1], charList[2], charList[3], charList[4]);

  return 0;
}