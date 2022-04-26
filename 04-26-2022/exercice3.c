#include <stdio.h>
#include <string.h>
#include <math.h>

int		*binary(int n);
void	inserer(int *tab, int len, int elem, int pos);
int		taillebin(int n);

int	main()
{	
	int i, n = 9, len = taillebin(n);
	
	int tab[len] = binary(n);
	for (i = 0; i < len; i++) printf("%i", tab[i]);
	
	return 0;
}

int		taillebin(int n)
{
	int i = n, taille = 0;
	while (i > 0)
	{
		taille += 1;
		i /= 2;
	}
	return taille;
}

int		*binary(int n)
{
	int i, taille = taillebin(n);
	int tab[taille];
	
	for (i = 0; i < taille; i++)
	{
		inserer(tab, taille, n%2, 0);
		n /= 2;
	}
	
	return tab;
}

void	inserer(int *tab, int len, int elem, int pos)
{
	int i;
	for (i = len; i > pos; i--) *(tab + i) = *(tab + i-1);
	*(tab+i) = elem;
}