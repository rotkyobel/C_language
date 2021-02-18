#include <stdio.h>

int main()
{

  printf("Array Bidimensional - Promedio de Calificaciones.\n\n");

  float notas[5][6] = {
      {7, 8, 9, 6, 10, 0},
      {7, 9, 7, 6, 10, 0},
      {6, 10, 8, 7, 9, 0},
      {7, 8, 6, 6, 9, 0},
      {8, 7, 9, 10, 6, 0}};

  for (int i = 0; i < 5; i++)
  {
    float promedio = 0;
    for (int j = 0; j < 5; j++)
    {
      printf("Calificacion [%d][%d]: %.2f\n", i, j + 1, notas[i][j]);
      promedio += notas[i][j];
    }
    notas[i][5] = promedio / 5;
    printf("El promedio de la fila %d es %.2f\n\n", i, notas[i][5]);
  }

  return 0;
}