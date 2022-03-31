#include <stdio.h>

int	main()
{
	int p, i, j, k;
	
	printf("veuillez entrer un entier: ");
	scanf("%i", &p);

	for(i = 0; i < p; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < p; i++)
	{
		for(k = 0; k < i; k++)
		{
			printf(" ");
		}
		
		for(j = p; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < p; i++)
	{
		for(j = p; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < p; i++)
	{
		for(k = p; k > i; k--)
		{
			printf(" ");
		}
		
		for(j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = 0; i < p; i++)
	{
		for(j = 0; j < p-i-1; j++)
		{
		printf(" ");
		}
		for(k = 0; k <= 2*i; k++)
		{
		printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = p; i > 0; i--)
	{
		for(j = 0; j < p-i; j++)
		{
		printf(" ");
		}
		for(k = 0; k < 2*i - 1; k++)
		{
		printf("*");
		}
		printf("\n");
	}
}