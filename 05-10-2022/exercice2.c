#include <stdio.h>

int	compte(int nombre);

int	main()
{
	printf("%i", compte(2022));
	
	return 0;
}

int compte(int nombre)
{
	if (nombre < 10) return 1;
	else return 1 + compte(nombre / 10);
}