#include <stdio.h>
#include <string.h>

int	main()
{
	char *prenoms[100];
	char prenom[100][20];
	char lettre;
	int i = 0, fin, j;

	do
	{
		scanf("%s", prenom[i]);
		prenoms[i] = prenom[i];
		i++;

	} while (strcmp(prenom[i-1], "ok"));

	fin = i-1;

	printf("entrer une lettre: ");
	scanf("%c", &lettre);

	printf("les prenoms qui commencent avec \'%c\' sont:\n", lettre);

	for (i)

	return 0;
}