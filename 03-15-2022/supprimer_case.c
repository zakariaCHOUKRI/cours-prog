#include <stdio.h>

int	main()
{
	int i, suppr, taille = 10;
	int tab[10] = {52, 62, 23, 44, 35, 76, 87, 18, 39, 10};
	
	for (i = 0; i < taille; i++)
	{
		if (i != taille - 1) printf("|%i", tab[i]);
		else printf("|%i|", tab[i]);
	}
	
	printf("\n\nquel case supprimer: ");
	scanf("%i", &suppr);
	printf("\n");
	
	for (i = suppr; i < taille - 1; i++)
	{
		tab[i] = tab[i+1];
	}
	tab[taille - 1] = 0;
	
	
	for (i = 0; i < taille - 1; i++)
	{
		if (i != taille - 2) printf("|%i", tab[i]);
		else printf("|%i|", tab[i]);
	}
	
	return 0;
}