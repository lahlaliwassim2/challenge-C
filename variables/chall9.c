#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	const Pi=3.14;
	float r , C ;
	printf("ce programme permet de calculer la circonfence d un cercle \n ");
	printf("entrer la valeur de rayon r :\n");
	scanf("%f",&r);
	C=Pi*r*2;
	printf("la circonfence C =%f",C);
	return 0;
}
