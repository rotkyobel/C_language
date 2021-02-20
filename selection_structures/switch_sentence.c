#include <stdio.h>

int main()
{

  char vocal;

  printf("Digite una vocal: ");
  scanf("%c", &vocal);

  switch (vocal)
  {
  case 'a':
    printf("\nEs la vocal a");
    break;
  case 'e':
    printf("\nEs la vocal e");
    break;
  case 'i':
    printf("\nEs la vocal i");
    break;
  case 'o':
    printf("\nEs la vocal o");
    break;
  case 'u':
    printf("\nEs la vocal u");
    break;
  default:
    printf("Se equivoco, %c no es un a vocal", vocal);
    break;
  }

  return 0;
}