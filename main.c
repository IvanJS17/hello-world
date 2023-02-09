#include <stdio.h>
#include <stdbool.h>

int main() 
{
  int integerA;
  float  floatA;
  char  letterA;

  printf("Ingresa el valor del entero A: ");

  scanf("%i", &integerA);

  printf("Ingresa el valor del float A: ");

  scanf("%f", &floatA);

  printf("Ingresa el valor del caracter A: ");

  scanf(" %c", &letterA);

  printf("El entero a es: %i", integerA);
  printf("El entero a es: %f", floatA);
  printf("El entero a es: %c", letterA);

  return 0;
}