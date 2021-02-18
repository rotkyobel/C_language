#include <stdio.h>

char studentName[30];
float studentScore;

void exam()
{
  if (studentScore >= 7 && studentScore <= 10)
  {
    printf("\nEl estudiante %s aprobo con una calificacion de %.2f\n", studentName, studentScore);
  }
  else if (studentScore < 7 && studentScore >= 0)
  {
    printf("\nEl estudiante %s desaprobo con una calificacion de %.2f\n", studentName, studentScore);
  }
  else
  {
    printf("\nIngrese una nota valida [0 - 10]\n");
  }
}

int main()
{

  printf("\nIngrese el nombre del estudiante: ");
  scanf("%s", &studentName);

  printf("Ingrese la calificacion: ");
  scanf("%f", &studentScore);

  exam();
  return 0;
}