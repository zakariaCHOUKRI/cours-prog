#include <stdio.h>

int	main()
{
	int i, j;
	int A[3][5];
	int At[5][3];
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("A[%i][%i]: ", i, j);
			scanf("%i", &A[i][j]);
		}
	}
	
	printf("\nA=\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("|");
		for (j = 0; j < 5; j++)
		{
			printf("%i\t", A[i][j]);
		}
		printf("|\n");
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			At[j][i] = A[i][j];
		}
	}
	
	printf("\nAt=\n");
	
	for (i = 0; i < 5; i++)
	{
		printf("|");
		for (j = 0; j < 3; j++)
		{
			printf("%i\t", At[i][j]);
		}
		printf("|\n");
	}
	
	return 0;
}