#include <stdio.h>

int	main()
{
	int tab[10] = {1, 23, 89, 7, 456, 10, 123, 145, -89, 97};
	int  indicemax = 0, indicemin = 0, i, max = tab[indicemax], min = tab[indicemin];
	
	for (i = 0; i < 10; i++)
	{
		if (tab[i] > max)
		{
			indicemax = i;
			max = tab[indicemax];
		}
		
		if (tab[i] < min)
		{
			indicemin = i;
			min = tab[indicemin];
		}
	}
			
	printf("le max est %i son indice est %i\n", max, indicemax);
	printf("le min est %i son indice est %i\n", min, indicemin);
	
	return 0;
}