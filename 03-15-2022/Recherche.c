#include <stdio.h>

int	main()
{
	int i, n, taille = 10, trouve = 0;
	int tab[10] = {1, 23, 456, 7, 89, 101, 1, 12, 134, 8};

	printf("inserer l'element a chercher dans le tableau:\n");
	
	for (int i = 0; i < taille; i++)
	{
		if (i != taille - 1) printf("|%i", tab[i]);
		else printf("|%i|", tab[i]);
	}
	printf("\n\n");
	
	scanf("%i", &n);
	
	for (i = 0; i < 10; i++)
	{
		if (tab[i] == n)
		{
			trouve = 1;
			break;
		}
	}
	
	if (trouve) printf("%i est dans le tableau dans l'indice %i", n, i);
	else printf("%i n'est pas dans le tableau", n);
	
	return 0;
}