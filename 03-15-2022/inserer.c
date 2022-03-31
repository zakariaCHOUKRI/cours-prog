#include <stdio.h>

int	main()
{
	int elem = -9, position, i, taille = 10;
	int tab[10] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
	
	for (i = 0; i < taille; i++)
	{
		printf("%i|", tab[i]);
	}
	printf("\n");
	
	for (i = taille; i > 0; i--)
	{
		if (tab[i-1] > elem)
		{
			tab[i] = tab[i-1];
			position = i-1;
		}
	}
	tab[i] = elem;
	
	for (i = 0; i < taille; i++)
	{
		printf("%i|", tab[i]);
	}
	
	return 0;
}