#include <stdio.h>

int main()
{

  int selected_door, door1, door2, door3;

  printf("Te encuentras en un sueno y estas atrapado \n");
  printf("Para salir tienes que elegir una de las tres puertas \n");

  printf("Ingrese el nro de la puerta (1-3): ");
  scanf("%i", &selected_door);

  switch (selected_door)
  {
  case 1:
    printf("Has elegido la puerta 1, en donde se encuentran dos leones hambrientos D: \n");
    break;

  case 2:
    printf("Has elegido la puerta 2, en donde se encuentra la salida :D \n");
    printf("Felicidades!");
    break;

  case 3:
    printf("Has elegido la puerta 3, en donde se encuentran un asesino en serie D: \n");
    break;

  default:
    printf("Elige de nuevo otra puerta");
    break;
  }

  return 0;
}