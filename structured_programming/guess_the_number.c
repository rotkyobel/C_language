#include <stdio.h>

int main()
{

  int number;
  int input_number;

  printf("Adivina el numero entre 1 y el 10: ");
  scanf("%i", &input_number);

  // Genera un semilla para crear los numeros
  srand(time(NULL));
  // Crea el numero aleatorio del 1 al 10
  number = (rand() % 10) + 1;

  if (input_number == number)
    printf("Ese es el numero, GANASTE!!!");
  else
    printf("El numero era %i, perdiste :c", number);

  return 0;
}