#include <stdio.h>
#define PI 3.14159265359
#define CUBE(x) (x*x*x)
#define VOLUME(r) (1.33333333333*PI*CUBE(r))
#define SOMME(x, y) (x+y)

int	main()
{
	int i, N, R;
	float total = 0;
	
	printf("entrer N: ");
	scanf("%i", &N);
	
	for (i = 0; i < N; i++)
	{
		printf("entrer R: ");
		scanf("%i", &R);
		total = SOMME(total, VOLUME(R));
	}
		
	printf("la somme des volumes des %i speheres est: %f", N, total);
	
	return 0;
}