#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	float A,B,M;
	printf("le maximal de deux nombres");
	printf("entrer la valeur de A \n");
	scanf("%g",&A);
	printf("entrer la valeur de B \n");
	scanf("%g",&B);
	M=A-B;
	if(M>0){
		printf("la valeur %g est la valeur max",A);
	}
	else if (M<0)
	{
		printf("la valeur  %g est la valeur max",B);
	}
	else
	printf("problemme");
	return 0;
}
