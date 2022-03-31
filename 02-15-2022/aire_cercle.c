#include <stdio.h>

int	main()
{
	const float PI = 3.141592653593;
	float rayon = 3;
	float aire = rayon * rayon * PI;
	printf("l'aire d'un cercle de rayon %f est: %f\n", rayon, aire);
	return 0;
}