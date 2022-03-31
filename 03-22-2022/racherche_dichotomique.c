#include <stdio.h>

int	main()
{
	int i, j, temp, t = 8, compteur = 0, elem, trouve = 0, start = 0, end = t, milieu;
	int tab[8] = {1, 2, 2, 3, 15, 20, 25, 30};

	printf("le tableau:\n");
	for (i = 0; i < t; i++)
	{
		printf("%i|", tab[i]);
	}
	printf("\n\nentrer l'element a chercher: ");
	scanf("%i", &elem);
	
	do
	{
		milieu = (start + end)/2;
		if (elem == tab[milieu] || elem == tab[start])
		{
			trouve = 1;
			break;
		}
		
		else if (elem > tab[milieu])
		{
			start = milieu;
		}
		
		else if (elem < tab[milieu])
		{
			end = milieu;
		}
		
		compteur++;
	}	while(end - start > 1);
		
	if (trouve) printf("%i est bien dans le tableau", elem);
	else printf("%i n'est pas dans le tableau", elem);
	printf("\n\nle compteur indique: %i", compteur);
	
	return 0;
}