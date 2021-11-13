#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int A ,Z;
	
	printf(" pair ou impaire \n\n\n\n");
	
	printf("taper un nombre");
	scanf("%d",&A);
	Z=A%2 ;
	if(Z==0){
	
	printf("le nombre et pair ");}
	else 
	printf("le nombre est impaire ");
	return 0;
}
