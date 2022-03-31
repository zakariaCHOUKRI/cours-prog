#include <stdio.h>

int	main()
{
	int dim, i, j, count, elem;
	int set[];
	printf("entrer la dimension du tableau: ");
	scanf("%i", &dim);
	int tab[dim];
	
	printf("\nentrer les elements du tableau\n");
	for (i = 0; i < dim; i++)
	{
		printf("element %i: ", i);
		scanf("%i", &tab[i]);
	}
	

	
	printf("\n\n");
	for (i = 0; i < dim; i++)
	{
		printf("%i|", tab[i]);
	}
	
	printf("\n");

	
	return 0;
}