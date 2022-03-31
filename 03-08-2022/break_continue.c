#include <stdio.h>

int	main()
{
	int i, n;
	printf("veuillez entrer un entier: ");
	scanf("%i", &n);
	for (i = 10; i > 0; i--)
	{
		if (i == n) continue;
		printf("%i\n", i);
	}
	
	return 0;
}