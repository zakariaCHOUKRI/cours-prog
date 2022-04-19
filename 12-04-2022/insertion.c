#include <stdio.h>

int	main()
{
	int tab[15] = {-10, -6, -2, 0, 3, 8, 11, 23, 50, 69, 89, 120, 360, 420};
	int *p;
	p = tab;
	
	int i, indice;
	int elem;

	scanf("%i", &elem);
	
	printf("avant insertion:\n");
	for (i = 0; i < 14; i++) printf("%i|", *(p+i));
	printf("\n");
	
	indice = 0;
	while (*(p+indice) < elem && indice < 14) indice++;
	

	for (i = 15; i > indice; i--) *(p+i) = *(p+i-1);
	*(p+indice) = elem;

	
	printf("\napres insertion:\n");
	for (i = 0; i < 15; i++) printf("%i|", *(p+i));
	
	return 0;
}