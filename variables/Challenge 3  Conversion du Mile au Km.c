#include <stdio.h>
#include <stdlib.h>

int main()
{
	float MILE , KM , METRE ;
	printf("taper la dstance en METRE:\n");
	scanf("%f", &METRE);
	KM = METRE/1000 ;
	MILE = KM*1.609;
	printf("la distance en KM est = %.5f \n", KM);
		printf("la distance en MILLE est = %.5f ", MILE);
		return 0 ;
		
}
