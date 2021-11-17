#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,i;
	printf("taper un nombre entra 1 et 9\n ");
	scanf("%d",&a);
	for(i=1;i<11;i++){
		printf("%d*%d=%d\n",a,i,a*i);
	}
	return 0;
}
