#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char L ;
	printf("lettre majuscule");
	printf("taper une letre ");
	scanf("%c",&L);
	
	if (L >= 65 && L <= 90)
	{
		printf("la lettre est majuscule");
		
	}
	else 
	printf("tu a pas saisir une letre majusculle");
	
	return 0;
}
