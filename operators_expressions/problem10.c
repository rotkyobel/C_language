/* 10. Un alumno desea saber cual sera su calificacion final en la materia de Algoritmos.   Dicha calificacion se compone de los siguientes porcentajes:
  - 55% del promedio de sus tres calificaciones parciales.
  - 30% de la calificacion del examen final.
  - 15% de la calificacion de un trabajo final. */

#include <stdio.h>

int main()
{

  printf("Calculando la calificacion final en la materia de Algoritmos\n");

  float parcial1, parcial2, parcial3, final_exam, final_work, final_calification;
  char student[50];

  printf("\nIngrese el nombre del estudiante: ");
  gets(student);

  printf("\nIngrese las tres calificaciones parciales: ");
  scanf("%f %f %f", &parcial1, &parcial2, &parcial3);

  printf("Ingrese la calificacion del examen final: ");
  scanf("%f", &final_exam);

  printf("Ingrese la calificacion del trabajo final: ");
  scanf("%f", &final_work);

  final_calification = ((parcial1 + parcial2 + parcial3) / 3 * 0.55) + (final_exam * 0.3) + (final_work * .15);

  printf("El estudiante %s obtuvo la calificacion de %.2f", student, final_calification);

  return 0;
}
