#include <stdio.h>

int	main()
{
	int i, n;
	float s = 0;
	
	printf("entrez n : ");
	scanf("%i", &n);
	for(i = 1; i <= n; i++)
	{
		s += 1/(float)i;
	}
	printf("S%i = %f", n, s);
	
	return 0;
}