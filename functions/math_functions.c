/*
  Funciones Matematicas:

    ceil(X)     -> Redondea al próximo entero mas cercano.
    fabs(x)     -> Devuelve el valor absoluto de x.
    floor(x)    -> Redondea por defecto al entero origen.
    fmod(x, y)  -> Calcula el resto de la división de x/y.
    pow(x, y)   -> Calcula x elevado a la potencia y.
    sqrt(x)     -> Devuelve la raiz cuadrada de x.
 */

#include <stdio.h>
void funcion_matematica();

int main() {

  funcion_matematica();

  return 0;
}

void funcion_matematica() {
  float x, cambio = 0;

  printf("Digite un numero: ");
  scanf("%f", &x);

  cambio = sqrt(x);

  printf("%.2f", cambio);

}