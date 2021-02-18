#include <stdio.h>

char studentName[30];
int studentScore;

void exam()
{
  if (studentScore >= 7 && studentScore <= 10)
  {
    printf("El estudiante %s ha sido aprobado\n", studentName);
  }
  else if (studentScore < 7)
  {
    printf("El estudiante %s ha sido desaprobado\n", studentName);
  }
  else
  {
    printf("Ingrese una nota valida\n");
  }
}

int main()
{

  printf("Ingrese el nombre del estudiante: ");
  scanf("%s", &studentName);

  printf("\nIngrese la calificacion: ");
  scanf("%i", &studentScore);

  exam();
  return 0;
}