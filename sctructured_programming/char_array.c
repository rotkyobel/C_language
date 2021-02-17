#include <stdio.h>

int main()
{

  printf("Cadena de caracteres");

  char nameC[50];

  int size = 0;

  printf("Ingresar el nombre con gets: \n");

  gets(nameC);

  printf("El nombre es: ");
  puts(nameC);

  size = strlen(nameC);

  printf("\nEl tamanio de la cadena es: %i\n", size);

  return 0;
}