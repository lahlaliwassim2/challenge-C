#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int A,B ;
	printf("la somme de deux nombres entiers\n ");
	
	printf("entrer la valeur de A ");
	scanf("%d",&A);
	
	printf("entrer la valeur de B ");
	scanf("%d",&B);
	
	if(A==B) {
		printf("le resultat de (A+B)*3 =%d",(A+B)*3);
		}
		else 
		printf("le resultat de (A+B) =%d",(A+B));
		
		return 0;
}
