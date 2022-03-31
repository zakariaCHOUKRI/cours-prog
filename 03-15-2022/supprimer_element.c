#include <stdio.h>

int	main()
{
	int i, j, suppr, doublon = 1, taille = 10;
	int tab[10] = {52, 62, 23, 44, 35, 76, 87, 18, 44, 10};
	
	for (i = 0; i < taille; i++)
	{
		if (i != taille - 1) printf("|%i", tab[i]);
		else printf("|%i|", tab[i]);
	}
	
	printf("\n\nquel element supprimer: ");
	scanf("%i", &suppr);
	printf("\n");
	
	for (i = 0; i < taille; i++)
	{
		if (tab[i] == suppr)
		{
			doublon += 1;
			for (j = i; j < taille - 1; j++)
			{
				tab[j] = tab[j+1];
			}
		}
	}
	
	
	for (i = 0; i < taille - doublon + 1; i++)
	{
		if (i != taille - doublon) printf("|%i", tab[i]);
		else printf("|%i|", tab[i]);
	}
	
	return 0;
}