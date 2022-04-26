#include <stdio.h>
#include <math.h>

double	racine(double n);
int		max(int a, int b);
int		min(int a, int b);
void	star(int p);
void	triangle(void);
void	triangle2(int height);
void	permuter(int *a, int *b);
int		lenstr(char *chaine);
int		somme_tab(int *tab, int taille);

int	main()
{
//	int x = 10, y = 20;
//	int *p1 = &x;
//	int *p2 = &y;
//	printf("%i %i\n", x, y);
//	permuter(p1, p2);
//	printf("%i %i\n", x, y);

	int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%i", somme_tab(t, 10));
	
	return 0;
}

////////////////////////////////////////////////////////////////////
double	racine(double n)
{
	return sqrt(n);
}

int		max(int a, int b)
{
	if (a > b) return a;
	return b;
}

int		min(int a, int b)
{
	if (a < b) return a;
	return b;
}
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
void	star(int p)
{
	while (p > 0)
	{
		printf("*");
		p--;
	}
	printf("\n");
}

void	triangle(void)
{
	int i, HEIGHT = 5;
	for (i = 0; i < HEIGHT; i++)
	{
		star(i+1);
	}
}

void	triangle2(int height)
{
	int i, j;
	for (i = 1; i < height+1; i++)
	{
		for (j = height - i; j > 0; j--)
		{
			printf(" ");
		}
		star(2*(i-1)+1);
	}
}
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
void	permuter(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
int		lenstr(char *chaine)
{
	int i = 0;
	while (*(chaine+i)) i++;
	return i;
}
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
int		somme_tab(int *tab, int taille)
{
	int i, result = 0;
	for (i = 0; i < taille; i++) result += *(tab+i);
	return result;
}
////////////////////////////////////////////////////////////////////
