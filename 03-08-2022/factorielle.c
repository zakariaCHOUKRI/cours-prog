#include <stdio.h>

int	main()
{
	int n, i, resultat = 1;
	printf("veuillez entrer n: ");
	scanf("%i", &n);
	
	printf("\nfor loop:\n");
	for (i = 1; i <= n; i++) resultat *= i;
	printf("%i! = %i\n", n, resultat);
	
	printf("\nwhile loop:\n");
	resultat = 1;
	i = 1;
	while (i <= n)
	{
		resultat *= i;
		i++;
	}
	printf("%i! = %i\n", n, resultat);
	
	return 0;
}