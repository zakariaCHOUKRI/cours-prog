#include <stdio.h>

int	main()
{
	int i, j, k, c;
	int A[3][5];
	int B[5][4];
	int C[3][4];
	
	
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("A[%i][%i]: ", i, j);
			scanf("%i", &A[i][j]);
		}
	}
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("B[%i][%i]: ", i, j);
			scanf("%i", &B[i][j]);
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			c = 0;
			for (k = 0; k < 5; k++)
			{
				c += A[i][k] * B[k][j];
			}
			C[i][j] = c;
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
	
	printf("\nB=\n");
	
	for (i = 0; i < 5; i++)
	{
		printf("|");
		for (j = 0; j < 4; j++)
		{
			printf("%i\t", B[i][j]);
		}
		printf("|\n");
	}
	
	printf("\nC=A*B=\n");
	
	for (i = 0; i < 3; i++)
	{
		printf("|");
		for (j = 0; j < 4; j++)
		{
			printf("%i\t", C[i][j]);
		}
		printf("|\n");
	}
	

	
	return 0;
}