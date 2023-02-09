#include <stdio.h>
#include <stdbool.h>

int main() 
{
  int integerX;
  int integerY;

  printf("Ingresa el valor X: ");

  scanf("%i", &integerX);

  printf("Ingresa el valor Y: ");

  scanf("%i", &integerY);

  printf("El valor de X es: %i", integerX);
  printf("El valor de Y es: %i", integerY);
  
  int integerAUX  =  integerX;
  int integernewX = integerY;
  int integernewY = integerAUX;

  printf("EL valor intercambiado del entero X es: %i", integernewX);
  printf("EL valor intercambiado del entero Y es: %i", integernewY);

  return 0;
}