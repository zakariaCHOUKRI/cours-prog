#include <stdio.h>

int	main()
{
	char *p;
	printf("le nombre de mots dans: ");
	gets(p);
	int compteur = 0, i = 0, word = 0;
	
	while (*(p+i))
	{
		if (*(p+i) == ' ' &&  *(p+i+1) != ' ' && *(p+i+1)) compteur++;
		i++;
	}
	compteur++;
	
	printf("est %i", compteur);
	
	return 0;
}