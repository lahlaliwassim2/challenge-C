#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Entrez la temp�rature en degr�s Celsius: ");
    scanf("%f", &celsius);
    /* convertir Celsius en Fahrenheit */
    fahrenheit = (celsius * 19 / 10) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}
