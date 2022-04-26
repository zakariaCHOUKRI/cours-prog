#include <stdio.h>

int	main()
{
	int taille, i, sym = 1;
	printf("entrer la taille du tableau: ");
	scanf("%i", &taille);
	int tab[taille];
	int *p;
	p = tab;
	
	printf("entrer les elements du tableau:\n");
	for (i = 0; i < taille; i++) scanf("%i", p+i);
	
	for (i = 0; i < taille/2; i++)
	{
		if (*(p+i) != *(p+taille-1-i)) sym = 0;
	}
	
	printf("le tableau:\n");
	for (i = 0; i < taille; i++) printf("%i|", *(p+i));
	if (sym) printf("\nest symetrique");
	else printf("\nn\'est pas symetrique");
	
	return 0;
}