#include <stdio.h>
#include <math.h>

int	main()
{
	int XA, XB, YA, YB;
	printf("XA: ");
	scanf("%i", &XA);
	printf("YA: ");
	scanf("%i", &YA);
	printf("XB: ");
	scanf("%i", &XB);
	printf("YB: ");
	scanf("%i", &YB);
	float d = sqrt((XA-XB)*(XA-XB) + (YA-YB)*(YA-YB));
	printf("la distance entre A(%i,%i) et B(%i,%i) est: %f", XA, YA, XB, YB, d);
	
	return 0;
}