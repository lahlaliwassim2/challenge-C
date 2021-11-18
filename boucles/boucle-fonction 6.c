#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void echange(int a,int b){
	int D;
	D=a;
	a=b;
	b=D;
	printf(  "l'echange ' de a =%d et b=%d",a,b);
	
	
}
int main() {
	int a,b,c;
	printf("donner a Et b");
	scanf("%d%d",&a,&b);
	printf("a=%d et b=%d ",a,b),
	echange(a,b);
	
	
	return 0;
}
