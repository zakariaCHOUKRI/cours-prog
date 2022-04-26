#include <stdio.h>

int	main()
{
	char *jour[] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
	int i, j;
	
	for (i = 0; i < 7; i++)
	{
		printf("%i\t%c\n", *(jour+i)+1, *(*(jour+i)+1));
	}

	return 0;
}