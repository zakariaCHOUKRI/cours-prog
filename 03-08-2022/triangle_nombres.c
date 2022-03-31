#include <stdio.h>

int main()
{
	int N, i, j;
	
	printf("veuillez entrer N: ");
	scanf("%i", &N);
	printf("\n");
	
	for(i = 1; i <= N; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%i", i);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for(i = N; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%i", i);
		}
		printf("\n");
	}
}