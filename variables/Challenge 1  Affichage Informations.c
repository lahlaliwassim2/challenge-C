#include <stdio.h>
#include<stdlib.h>
int main ()
{
	char nom[10];
	char sexe[10];
	int age ;
	char num[10] ;
	
	printf("taper votre nom : ");
	scanf("%s", nom);
	

	printf("taper votre age : ");
	scanf("%d",&age);
	printf("taper votre num : ");
	scanf("%s",&num);
	printf("quel est votre sexe ? : ");
	
	scanf("%s",sexe);
	printf("hy %s vous ete %s ,votre age est : %d et votre num est :%s ",nom,sexe,age,num);
	
	

	return 0;
}
