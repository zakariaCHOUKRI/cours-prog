#include <stdio.h>
#include <string.h>

int	main()
{
	char c[3][80] = {"Hello world!", "World helllo!", "Hola mullllndo!"};
	int longueur1, longueur2;
		
	longueur1 = strlen(c[2]);
	
	longueur2 = 0;
	while (c[2][longueur2]) longueur2++;
	
	printf("la chaine %s fait %d caracteres (comptee avec strlen)\n", c[2], longueur1);
	printf("la chaine %s fait %d caracteres (comptee avec boucle)\n", c[2], longueur2);
	
	return 0;
}