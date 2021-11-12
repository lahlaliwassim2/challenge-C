#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x, Tp ; 
	printf("l inverse ");
	printf("entre un nombres de 3 chifres :");
	scanf("%d",&x);
	Tp=x%10;
	x=x/10;
	printf("%d",Tp);
	Tp=x%10;
	x=x/10;
	printf("%d",Tp);
	Tp=x%10;
	x=x/10;
	printf("%d",Tp);
	return 0;
}
