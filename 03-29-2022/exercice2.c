#include <stdio.h>
#include <math.h>

int	main()
{
	char chaine[50];
	int i, carre, entier = 0, taille = 0;

	printf("entrer la chaine de caracteres: ");
	scanf("%s", chaine);

	while (chaine[taille]) taille++;

	for (i = 1; chaine[i] != '\0'; i++) entier += (chaine[i] - '0')*(pow(10,(taille-(i+1))));

	if (chaine[0] == '-') entier = -entier;

	carre = entier * entier;
	printf("l\'entier que vous venez d\'entrer est: %i", entier);
	printf("\nle carre de l\'entier que vous venez d\'entrer est: %i", carre);

	return 0;
}