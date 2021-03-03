// 8. Hacer un arbol con '*' del tipo:
// ejemplo:
// Digite el numero de filas: 5
//    *
//    ** 
//    ***
//    ****
//    *****

#include <stdio.h>

int main(){

  int i, row;

  printf("Digite el numero de filas: ");
  scanf("%i", &row);

  for(i = 1; i <= row; i++){
    int x = 1;
    while(x <= i){
      printf("*");
      x++;
    }
    printf("\n");
  }

  return 0;
}