#include <stdio.h>

int main()
{

  char x[50];

  printf("Digite su nombre: ");
  // scanf("%s", x);
  gets(x);

  printf("Su nombre es %s", x);

  return 0;
}