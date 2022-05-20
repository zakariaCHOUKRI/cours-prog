#include <stdio.h>

#ifdef PGCD_ITER
	int	PGCD(int x, int y)
	{
		int r = x % y;
		while (r)
		{
			x = y;
			y = r;
			r = x % y;
		}
		printf("iteratif:\n");
		return y;
	}
#else
	int	PGCD(int x, int y)
	{
		int r = x % y;
		
		if (r == 0) 
		{
			printf("recursif:\n");
			return y;
		}
		else return PGCD(y, r);
	}
#endif