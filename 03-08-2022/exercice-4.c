#include <stdio.h>

int	main()
{
	int n, i, j, k;
	
	printf("entrez n : ");
	scanf("%i", &n);
	
	printf("\t");
	
	for(i = 0; i <= n; i++)
	{
		printf("%i\t", i);
	}
	printf("\n");
	
	for(i = 0; i <= n; i++)
	{
		printf("%i\t", i);
		for(j = 0; j <= n; j++)
		{
			if (j <= i)
			{
				k = i*j;
				printf("%i\t", k);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}