#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,Z;
	float S,M,D,R;
	printf("entrer la valeur de a :");
	scanf("%d",&a);
	printf("entrer la valeur de b :");
	scanf("%d",&b);
	Z=a+b; // la somme
	S=a-b; //la soustraction 
	M=a*b; //la multiplacation
	D=a/b;
	R=a%b;
	printf("la somme Z= %d \t el la soustraction S = %g \t et la multiplication M = %g \t et la devision D = %g \t et le reste est %g," ,Z,S,M,D,R);
	return 0;
}
