#include <stdio.h>

char publicText[] = {"Texto en una variable global\n"};

void check()
{
  printf("\nImprimir desde la funcion: check\n");

  printf("Variable global: ");
  printf("%s", publicText);

  printf("Variable local: ");
  // printf("%s", privateText);
}

int main()
{

  printf("Variables globales!\n");

  char privateText[] = {"Texto en una variable local\n"};

  printf("Variable global: ");
  printf("%s", publicText);

  printf("Variable local: ");
  printf("%s", privateText);

  check();

  return 0;
}