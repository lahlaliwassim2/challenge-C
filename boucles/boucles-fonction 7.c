#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
  bool ispremier( int a ){                               // fonction utulisée avec les condition 
  	int i; 
  	bool t=true;                                     //declaration du variables 
  	for (i=a-1;i>1;i--){                            // boucle 
  		if (a%i==0)                                // condition 
  		t=false;          
	  }
	  if (t==true)                             //condition 
	  printf("le nombre est premier !!!");    //affichage
	  else
{
	  	  
	  printf("le nombre pas premier!!!");
	  return t; }
	  }
	  
	  int main(){                    
	  	int a;
	  	printf("entrer a");
	  	scanf("%d",&a);
	  	ispremier(a);           //appele de fonction 
	  	return 0;
	  }
  	

