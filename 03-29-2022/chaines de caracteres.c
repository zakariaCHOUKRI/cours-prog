#include <stdio.h>

int	main()
{
	char semaine[7][9];
	int i, jour;
	
	for (i = 0; i < 7; i++) scanf("%s", semaine[i]);
	putchar('\n');
	
	for (i = 0; i < 7; i++) printf("%s\n", semaine[i]);
	putchar('\n');
	
	printf("entrer le numero d\'un jour de la semaine: ");
	scanf("%i", &jour);
	
	printf("le %ieme jour est %s\n\n", jour, semaine[jour-1]);
	
	for (i = 0; i < 7; i++) printf("%c\n", semaine[i][0]);

	return 0;
}