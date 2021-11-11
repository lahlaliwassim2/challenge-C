#include <stdio.h>
#include <stdlib.h>


int main()
 {

float fahrenheit, celsius;

printf("ce programme de convertion du Fahrenheit en Celsius :) \n\n");

printf("la valeur en Fahrenheit : ");
scanf("%f", &fahrenheit);

  /* convertir Fahrenheit en Celsius */

celsius = (fahrenheit - 32) / 1.8;

printf("%g fahrenheit = %g celsius \n", fahrenheit, celsius);

if (celsius < 0) {
printf("Tres froid");
}
else if (celsius < 15) {
printf("froid");
}
else if (celsius < 30) {
printf("chaud");
}
else {
printf("Tres chaud");
}

return 0;
}

