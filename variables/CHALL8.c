#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x1,x2,y1,y2,AB;
	printf("entrer x1 de A :");
	scanf("%f",&x1);
	printf("entrer y1 de A :");
	scanf("%f",&y1);
		printf("entrer x2 de B :");
	scanf("%f",&x2);
	printf("entrer y2 de B :");
	scanf("%f",&y2);
	AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("la distance AB =%f",AB);
	
	return 0;
}
