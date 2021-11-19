#include<stdio.h>
#include<stdio.h>
int main(){
	int Tab[30],Nbr,i,x;                                               //declaration de tableau 
    	printf("entrer les nombres de collones de tableau ");         //affichage  
	
	scanf("%d",&x);                                                  //lecture de nombres de collones 
	
	for(i=0;i<x;i++){                                               // boucle utilisée  (remplissage de tableau )
		printf("T[%d]",i);                                       
		scanf("%d",&Tab[i]);
		}
		printf("entrer le nombre que vous chercher dans ce tableau :");
	    scanf("%d",&Nbr);
		 for(i=0;i<10;i++){                                        //boucle 
			if(Tab[i]==Nbr){
			printf("la position de ce nombre est %d\n",i);       // affichage de position 
			
			return 0;
		}
		
		}
		printf("ce nombre n'existe pas dans le tableau");                  
	return 0;
}
