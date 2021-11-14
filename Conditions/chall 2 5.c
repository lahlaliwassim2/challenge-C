#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c;
	float D,x0,x1,x2;
	
	
	printf("les solutions possible d une equation de desieme deugres :\n\n");
	printf("entrer la valeur de a b c \n");
	scanf("%d %d %d",&a,&b,&c);
	D=pow(b,2)-a*c*4; 
	x0=-b/a*2;
	x1=((-b)-sqrt(D))/a*2;
	x2=((-b)+sqrt(D))/a*2;
	if(D==0) 
	{
	printf("l equation a une seule solition x1 =  %g",x0);
}
	else if(D>=0)
		{
			printf("l equation possed de solutions \n ");
			printf("la solution 1 x1  =%g \n",x1);
			printf("la solution 2 x2 =%g",x2);
			
		}
	else
	 
	printf("l equation n a pas de solutions sauf que deux solition qui sont pas reel");
	
	return 0;
 
}

