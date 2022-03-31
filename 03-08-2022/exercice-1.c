#include <stdio.h>

int	main()
{
	int a, b, q, r, a2;
	
	q = 0;
	
	printf("entrez a : ");
	scanf("%i", &a);
	
	printf("entrez b : ");
	scanf("%i", &b);
	
	r = a;
	
	while (r-b >= 0)
	{
		r = r - b;
		q++;
	}
	
	printf("%i = %i * %i + %i", a, b, q, r);
	
	/*
	r = a%b;
	q = a/b;
	printf("%i = %i * %i + %i", a, b, q, r);
	*/
	
	return 0;
}