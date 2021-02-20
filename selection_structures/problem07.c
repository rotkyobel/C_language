// Problema 07: Ingresar por teclado el nombre y el signo de una persona e imprimir el nombre si la persona es signo Aries, caso contrario imprimir que no es Aries.

#include <stdio.h>

int main()
{

  char nombre[30], signo[20];

  printf("Digite su nombre: ");
  gets(nombre);

  printf("Digite su signo: ");
  gets(signo);

  if (strcmp(signo, "aries") == 0)
  {
    printf("\n%s es signo aries", nombre);
  }
  else
  {
    printf("\n%s no es signo aries", nombre);
  }

  return 0;
}