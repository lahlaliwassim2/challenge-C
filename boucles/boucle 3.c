#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a ,i,premier=1;
	printf("premier ou non premier \n");
	printf("a:");
	scanf("%d",&a);
for(i=a-1;i!=1;i--) {
if(a%i==0){

premier=0;
break;
}
}

if(premier==0)
printf(" non premier");
else 
printf(" premier");
return(0);
}
