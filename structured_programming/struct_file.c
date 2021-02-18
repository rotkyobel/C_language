#include <stdio.h>

struct personalData
{
  char name[20];
  char last_name[20];
  int age;
};

int main()
{

  printf("Archivos - Guardar en un archivo!\n");

  struct personalData person;

  FILE *archivo;
  // archivo = fopen("DatosPersonales001.dat", "wb");
  archivo = fopen("DatosPersonales001.dat", "rb");

  if (archivo != NULL)
  {
    // fflush(stdin);

    // printf("Leer datos: \n");

    // printf("Ingresa el nombre: ");
    // gets(person.name);

    // printf("Ingresa el apellido: ");
    // gets(person.last_name);

    // printf("Ingresa la edad: ");
    // scanf("%i", &person.age);

    // printf("Imprimir datos: \n");
    // printf("%s, ", person.name);
    // printf("%s, ", person.last_name);
    // printf("%i \n", person.age);

    // fwrite(&person, sizeof(person), 1, archivo);

    // fclose(archivo);

    fread(&person, sizeof(person), 1, archivo);

    printf("Imprimir los datos \n\n");

    printf("Nombre: %s\n", person.name);
    printf("Apellido: %s\n", person.last_name);
    printf("Edad: %i\n", person.age);

    fclose(archivo);
  }
  else
  {
    printf("No se creo el archivo: \n");
  }

  return 0;
}