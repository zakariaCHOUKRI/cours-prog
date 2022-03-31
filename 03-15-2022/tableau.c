#include <stdio.h>

int	main()
{
	int taille, i, n;
	printf("entrer la taille du tableau: ");
	scanf("%i", &taille);
	int tab[taille];
	
	for (i = 0; i < taille; i++)
	{
		scanf("%i", &tab[i]);
	}
	
	for (i = 0; i < taille; i++)
	{
		if (i != taille - 1) printf("|%i", tab[i]);
		else printf("|%i|", tab[i]);
	}
	
	
	return 0;
}