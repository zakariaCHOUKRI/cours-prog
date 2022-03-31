#include <stdio.h>

int	main()
{
	float u1, u2;
	u1 = 2;
	u2 = 3;
	do
	{
		u2 = (2*u1 + 1)/(u1 + 1);
		u1 = (2*u2 + 1)/(u2 + 1);
		
	}while(u2-u1 < 0.00001);
	
	printf("%f", u2);
	
	return 0;
}