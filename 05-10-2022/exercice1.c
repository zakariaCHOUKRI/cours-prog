#include <stdio.h>
#define PI 3.14159265359
#define CUBE(x) (x*x*x)
#define VOLUME(r) (1.33333333333*PI*CUBE(r))
#define SOMME(n, r) (n * VOLUME(r))

int	main()
{
	int N, R;
	float somme;
	printf("entrer N: ");
	scanf("%i", &N);
	printf("entrer R: ");
	scanf("%i", &R);
	
	somme = SOMME(N, R);
		
	printf("la somme des volumes de %i speheres de rayon %i est: %f", N, R, somme);
	
	return 0;
}