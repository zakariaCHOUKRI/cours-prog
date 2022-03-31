#include <stdio.h>

int	main()
{
	int i, j, temp, t = 6, compteur = 0;
	int tab[6] = {2, 1, 33, 1, 0, 2};
	
	printf("le tableau avant tri:\n");
	for (i = 0; i < t; i++)
	{
		printf("%i|", tab[i]);
	}
	printf("\n");
	
	for (i = 0; i < t-1; i++)
	{
		for (j = i+1; j < t; j++)
		{
			if (tab[j] > tab[i])
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
				compteur++;
			}
		}
	}
	
	printf("\nle tableau apres tri:\n");
	for (i = 0; i < t; i++)
	{
		printf("%i|", tab[i]);
	}
	printf("\n\nle compteur indique: %i", compteur);
	
	return 0;
}