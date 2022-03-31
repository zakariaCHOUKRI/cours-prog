#include <stdio.h>

int	main()
{
	int u, v, d, n = 0;

	do
	{
		n++;
		u = n*n;
		v = -2*n + 15;
	} while (u < v);
	
	printf("Un >= Vn a partir de n = %i", n);

	return 0;
}