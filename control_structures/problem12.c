// 12. Serie Fibonacci
// 1 1 2 3 5 8

#include <stdio.h>

int main() {

  int numero, i, x = 1, y = 1, z;

  printf("Digite el numero de elementos: ");
  scanf("%i", &numero);

  for(i = 1; i <= numero; i++) {
    
    printf("%i, ", x);
    z = x + y;
    x = y;
    y = z;

  }

  return 0;
}
