#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int tp,x;
	printf("entrer un nombres ");
	scanf("%d",&x);
	while(x!=0)
	{
		tp=x%10;
		printf("%d",tp);
		x=x/10;
	}
	return 0;
}
