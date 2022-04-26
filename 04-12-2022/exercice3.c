#include <stdio.h>

int	main()
{
	int i, j, decal, taille, temp;
	printf("entrer la taille du tableau: ");
	scanf("%i", &taille);
	int tab[taille];
	int *p;
	p = tab;
	
	printf("entrer les elements du tableau:\n");
	for (i = 0; i < taille; i++) scanf("%i", p+i);
	
	printf("entrer le decalage:\n");
	scanf("%i", &decal);
	
	printf("le tableau initial:\n");
	for (i = 0; i < taille; i++) printf("%i|", *(p+i));
	
	for (i = 0; i < decal; i++)
	{
		for (j = 0; j < taille; j++)
		{
			temp = *p;
			*p = *(p+j);
			*(p+j) = temp; 
		}
	}
	
	printf("\n\nle tableau apres decalage:\n");
	for (i = 0; i < taille; i++) printf("%i|", *(p+i));
	
	return 0;
}