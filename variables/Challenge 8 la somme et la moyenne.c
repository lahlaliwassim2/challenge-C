#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c,d;
	float Somme, Moyenne;
	printf("ce programme permet d affichier la somme et la moyenne de 4 valeurs\n");
	printf("entrer la valeur de a:");
	scanf("%d",&a);
	printf("entrer la valeur de b:");
	scanf("%d",&b);
	printf("entrer la valeur de c:");
	scanf("%d",&c);
	printf("entrer la valeur de d:");
	scanf("%d",&d);
	Somme=a+b+c+d;
	Moyenne=(a+b+c+d)/4;
	printf("la somme =%g \t et la moyenne = %g",Somme,Moyenne);
	return 0;
}
