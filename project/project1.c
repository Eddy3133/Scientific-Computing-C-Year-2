// Converts a Fanhrenheit temperature to Celsius
// Version 1

#include <stdio.h>
#define SOME 
int main( void ) {
  float fahrenheit, celsius;

  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32.0f) * (5.0f / 9.0f);

  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}
