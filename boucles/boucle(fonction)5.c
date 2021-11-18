
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ADITION(int x,int y){
	return x+y;
}
int main() {
	int x,y,somme;
	printf("entrer x et y ");
	scanf("%d %d",&x,&y);
	somme=ADITION(x,y);
	printf("resultat est %d ",somme);
	
	return 0;
}
