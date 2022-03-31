#include <stdio.h>

int	main()
{
	int i, j;
	int tab[3][4];
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("tab[%i][%i]: ", i, j);
			scanf("%i", &tab[i][j]);
		}
	}
	
	printf("\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("|");
		for (j = 0; j < 4; j++)
		{
			printf("%i\t", tab[i][j]);
		}
		printf("|\n");
	}
	
	return 0;
}