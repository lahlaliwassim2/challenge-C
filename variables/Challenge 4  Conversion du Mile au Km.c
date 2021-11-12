#include <stdio.h>
int main()
{
    float Mile ,Metre,Km;
    printf("Entrez  la distance en Mile: ");
    scanf("%f", &Mile);
   
     Km= Mile/1.609;
    Metre =Km/1000;
     
    printf("La distance en kilomètre = %.2f \n ", Km);
     printf("la distance en metre  = %.2f m", Metre);
    return 0;
}
