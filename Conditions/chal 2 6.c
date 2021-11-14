#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x ,C;
	printf("convrtisseur année de donner: \n");
	printf("entrer le nombres d annee :\n");
	scanf("%d",&x);
	printf("MENU: \n 1:mois \n 2:jours \n 3:heures \n 3:min \n 4:sec \n");
	printf("entrer votre choix:");
	scanf("%d",&C);
	switch(C)                       //CHOIX
	{
		case 1 : 
		printf("mois= %d mois ",x*12);
		break;
		
		case 2 :
			printf("jours=%d  jours" ,x*12*30);
			break;
		case 3	:
			printf("heures=%d heures",x*12*30*24);
			break;
		case 4:
		    printf("min=%d minutes",x*12*30*24*60);
			break;
		case 5:
		    printf("sec=%d sec",x*12*30*24*60*60);
			break;		
			default : printf("aucun resultat");
	}
	return 0;
}
