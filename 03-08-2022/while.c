#include <stdio.h>

int	main()
{
	int i, n;
	
	printf("veuillez entrer un entier: \n");
	scanf("%i", &n);
	
	if (n % 2) n++;
	
	i = 0;
	while (i < 10)
	{
		printf("%d\n", n+2*i);
		i++;
	}
}