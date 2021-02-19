// 9. Calcular el nuevo salario de un obrero si obtuvo un incremento del 25% sobre su salario.

#include <stdio.h>

int main()
{

  float salario, aumento, salario_final;

  printf("Ingrese el salario: ");
  scanf("%f", &salario);

  aumento = salario * .25;

  salario_final = salario + aumento;

  printf("El nuevo salario es: %.2f", salario_final);

  return 0;
}