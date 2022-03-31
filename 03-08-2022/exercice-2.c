#include <stdio.h>

int	main()
{
	int n, i, j, k;
	
	printf("entrez n : ");
	scanf("%i", &n);
	
	printf("\n(a)\n");
	for(i = 1; i <= n; i++)
	{
		printf("%i\n1 2 3\n", i);
	}
	
	printf("\n(b)\n");
	for(i = 1; i <= n; i++)
	{
		printf("%i\n", i);
		for(j = 1; j <= i; j++)
		{
			printf("%i ", j);
		}
		printf("\n");
	}
	
	printf("\n(c)\n");
	for(i = 1; i <= n; i++)
	{
		printf("%i\n", i);
		for(j = 1; j <= i; j++)
		{
			k = i * j;
			printf("%i ", k);
		}
		printf("\n");
	}
	
	return 0;
}