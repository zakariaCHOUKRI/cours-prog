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

	for (i = t; i > 0; i--)
	{
		for (j = 0; j < i-1; j++)
		{
			if (tab[j] > tab[j+1])
			{
				temp = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = temp;
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