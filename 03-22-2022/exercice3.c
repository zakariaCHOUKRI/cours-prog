#include <stdio.h>

int	main()
{
	int i, j, k, n;
	printf("entrer n: ");
	scanf("%i", &n);
	n++;
	int triangle[n][n];
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == 0 || i == j)
			{
				triangle[i][j] = 1;
			}
			
			else if (i < j)
			{
				triangle[i][j] = 0;
			}
			
			else
			{
				triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
			}
		}
	}
	
	printf("\n");
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i+1; j++)
		{
			printf("%i\t", triangle[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}