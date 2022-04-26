#include <stdio.h>

void	inserer(int *tab, int len);

int	main()
{
	int tab[12] = {1, 2, 3, 4, 5, 6, 7, 8};
	int i;
	
	for (i = 0; i < 12; i++) printf("%i|", tab[i]);
	printf("\n");
	inserer(tab, 12);
	printf("\n");
	for (i = 0; i < 12; i++) printf("%i|", tab[i]);
	
	return 0;
}

void	inserer(int *tab, int len)
{
	int elem, pos, i;
	
	printf("entrer une position: ");
	scanf("%i", &pos);
	printf("entrer un element: ");
	scanf("%i", &elem);
	
	for (i = len; i > pos; i--) *(tab + i) = *(tab + i-1);
	*(tab+i) = elem;
}