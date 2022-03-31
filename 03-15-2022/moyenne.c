#include <stdio.h>

int	main()
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	float moyenne = 0;
	int i;
	
	for (i = 0; i < 10; i++)
	{
		moyenne += tab[i];
	}
	moyenne = moyenne / 10;
	printf("%f", moyenne);
	
	return 0;
}