#include <stdio.h>

int main()
{

  int score;

  printf("Ingrese la calificacion del estudiante:");
  scanf("%i", &score);

  if (score < 60 && score >= 0)
    printf("El estudiante esta desaprobado");
  else if (score >= 60 && score < 90)
    printf("El estudiante esta aprobado");
  else if (score >= 90 && score <= 100)
    printf("El estudiante esta aprobado, excelente :D");
  else
    printf("Ingrese una calificacion valida");

  return 0;
}