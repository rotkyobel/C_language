#include <stdio.h>
#include <stdlib.h>

int main()
{

  int x = 0;
  int y = 1;
  int z;
  int fib_value;

  printf("Cuantas vueltas deseas en la secuencia Fibonacci?: ");
  scanf("%i", &fib_value);

  // printf("\n %i, %i, ", x, y);

  for (int i = 1; i <= fib_value; i++)
  {
    printf("%i, ", x);

    z = x + y;
    x = y;
    y = z;
  }

  return 0;
}