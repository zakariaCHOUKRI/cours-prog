#include <stdio.h>

int	main()
{
	int dim, i, j, elem, err, doublons = 0;
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
	
	for (i = 0; i < dim; i++)
	{
		if (doublons) break;
		else
		{
			elem = tab[i];
			for (j = i+1; j < dim; j++)
			{
				if (elem == tab[j]) 
				{
					err = elem;
					doublons = 1;
					break;
				}
			}
		}
	}
	
	if (doublons) printf("%i est la premiere valeur doublon");
	else printf("succes");
	
	return 0;
}