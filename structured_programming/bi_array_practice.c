#include <stdio.h>

int main()
{

  int arr[3][4];

  arr[0][0] = 2;
  arr[0][1] = 1;
  arr[0][2] = 1;
  arr[0][3] = 0;

  arr[1][0] = 1;
  arr[1][1] = 5;
  arr[1][2] = 3;
  arr[1][3] = 1;

  arr[2][0] = 5;
  arr[2][1] = 7;
  arr[2][2] = 3;
  arr[2][3] = 11;

  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 4; j++)
    {
      sum += arr[i][j];
    }
    printf("Suma fila %i: %i \n", i + 1, sum);
  }

  return 0;
}