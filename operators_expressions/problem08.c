// 8. Dadas las horas trabajadas de una persona y el valor por hora. Calcular el salario.

#include <stdio.h>

int main()
{

  float horas_trabajadas, precio_hora, salario;

  printf("Ingrese la cantidad de horas trabajadas: ");
  scanf("%f", &horas_trabajadas);

  printf("Ingrese el precio por hora: ");
  scanf("%f", &precio_hora);

  salario = horas_trabajadas * precio_hora;

  printf("El salario correspondiente es: %.2f", salario);

  return 0;
}