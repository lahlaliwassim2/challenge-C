#include <stdio.h>
#include <stdlib.h>

int main()
 {

float fahrenheit, celsius;



printf("entrer la valeur en Fahrenheit : ");
scanf("%f", &fahrenheit);

celsius = (fahrenheit - 32) / 1.8;

printf("%g fahrenheit = %g celsius \n", fahrenheit, celsius);

return 0;
}
