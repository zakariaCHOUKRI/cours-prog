#include <stdio.h>

int	main()
{
	int n, i;
	float lim;
	printf("entrer n: ");
	scanf("%i", &n);
	int fibo[n];
	fibo[0] = 1;
	fibo[1] = 1;
	
	for (i = 2; i < n; i++) fibo[i] = fibo[i-1] + fibo[i-2];

	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("%i|", fibo[i]);
	}
	
	lim = (float)fibo[i-1]/fibo[i-2];
	
	printf("\nla limite est %f", lim);
	
	return 0;
}