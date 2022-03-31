#include <stdio.h>

int	main()
{
	int prix_net, TVA;
	printf("entrer le prix_net:\n");
	scanf("%i", &prix_net);
	printf("\nentrer la valeur de la TVA:\n");
	scanf("%i", &TVA);
	float prix_TTC = (float)prix_net + ((float)prix_net * (float)TVA)/100;
	printf("\nle prix TTC est: %f", prix_TTC);
	
	return 0;
}