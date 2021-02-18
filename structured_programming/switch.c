#include <stdio.h>

int main()
{

  printf("Condicional switch \n");

  int option;

  scanf("%i", &option);

  switch (option)
  {
  case 1:
    printf("Elegiste el numero 1 \n");
    break;

  case 2:
    printf("Elegiste el numero 2 \n");
    break;

  case 3:
    printf("Elegiste el numero 3");
    break;

  default:
    printf("Elegiste un opcion invalida");
    break;
  }

  return 0;
}