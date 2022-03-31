#include <stdio.h>

int	main()
{
	int L, C, i, j;
	printf("Entrez le nombre de lignes : ");
	scanf("%i", &L);
	printf("Entrez le nombre de colonnes : ");
	scanf("%i", &C);
	
	for(i = 0; i < L; i++)
	{
		if (i == 0 || i == L-1)
		{
			for(j = 0; j < C; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		else
		{
			printf("*");
			for(j = 0; j < 2*C-3; j++)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	
	return 0;
}