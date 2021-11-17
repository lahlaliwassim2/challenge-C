#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int L,i,j,k;
	printf("taper un nombre de ligne\n");
	scanf("%d",&L);
	for(i=1;i<=L;i++)	{
		for(j=1;j<=L-i;j++){
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++){
			printf("*");
		
		}

	printf("\n");	}
	
	return 0;
}
