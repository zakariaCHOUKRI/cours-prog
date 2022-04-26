#include <stdio.h>

int	main()
{
	int i, x, taille, counter, temp, nouvelle_taille;
	printf("entrer la taille du tableau: ");
	scanf("%i", &taille);
	int tab[taille];
	int *p;
	p = tab;
	
	printf("entrer les elements du tableau:\n");
	for (i = 0; i < taille; i++) scanf("%i", p+i);
	printf("entrer x: ");
	scanf("%i", &x);
	printf("le tableau initial:\n");
	for (i = 0; i < taille; i++) printf("%i|", *(p+i));
	
	for (i = 0; i < taille; i++)
	{
		if (*(p+i) != x)
		{
			*(p+counter) = *(p+i);
			counter++;
		}
	}
	nouvelle_taille = taille-(i-counter);
	
	printf("\nle tableau intermediare:\n");
	for (i = 0; i < nouvelle_taille; i++) printf("%i|", *(p+i));
	
	for (i = 0; i < nouvelle_taille/2; i++)
	{
		temp = *(p+nouvelle_taille-1-i);
		*(p+nouvelle_taille-1-i) = *(p+i);
		*(p+i) = temp;
	}
	
	printf("\nle tableau final:\n");
	for (i = 0; i < nouvelle_taille; i++) printf("%i|", *(p+i));
	
	return 0;
}