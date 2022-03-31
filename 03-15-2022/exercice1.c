#include <stdio.h>

int	main()
{
	int dim, i, count;
	printf("entrer la dimension du tableau: ");
	scanf("%i", &dim);
	int tab[dim];
	
	printf("\nentrer les elements du tableau\n");
	for (i = 0; i < dim; i++)
	{
		printf("element %i: ", i);
		scanf("%i", &tab[i]);
	}
	
	printf("\n");
	for (i = 0; i < dim; i++)
	{
		printf("%i|", tab[i]);
	}
	
	printf("\n");
	
	for (i = 0; i < dim/2; i++)
	{
		if (tab[i] != tab[dim-(i+1)]) 
		{
			count += 1;
		}
	}
	
	if (count <= 1) printf("le tableau est un palindrome");
	else printf("le tableau n'est pas un palindrome");
	
	return 0;
}