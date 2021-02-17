#include <stdio.h>

int main()
{

  char text[100];

  printf("Ingresa un texto: ");
  gets(text);

  int size = strlen(text);

  for (int i = size; i >= 0; i--)
  {
    printf("%c", text[i]);
  }

  return 0;
}