// Problema 08: Ingresar el nombre, edad y sexo de una persona e imprimir solo si la persona es de sexo masculino y mayor de edad, el nombre de la persona.

#include <stdio.h>

int main()
{

  char name[30], gender[30];
  int age;

  printf("Ingrese su nombre: ");
  gets(name);

  printf("Ingrese su sexo: ");
  gets(gender);

  printf("Ingrese su edad: ");
  scanf("%i", &age);

  if (strcmp(gender, "masculino") == 0 && age >= 18)
  {
    printf("\n%s es mayor de edad y su sexo es masculino", name);
  }

  return 0;
}