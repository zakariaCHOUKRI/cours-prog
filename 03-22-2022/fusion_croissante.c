#include <stdio.h>

int	main()
{
	int i, t1 = 0, t2 = 0, n = 6, m = 10, compteur = 0;
	int T1[6] = {0, 1, 10, 20, 30, 50};
	int T2[10] = {1, 2, 2, 3, 15, 20, 25, 30, 40, 40};
	int T3[10+6];
	
	printf("le tableau T1:\n");
	for (i = 0; i < n; i++)
	{
		printf("%i|", T1[i]);
	}
	printf("\n\n");
	
	printf("le tableau T2:\n");
	for (i = 0; i < m; i++)
	{
		printf("%i|", T2[i]);
	}
	printf("\n\n");
	
	while (t1 < n && t2 < m)
	{
		if (T1[t1] > T2[t2])
		{
			T3[t1+t2] = T2[t2];
			t2++;
		}
		
		else
		{
			T3[t1+t2] = T1[t1];
			t1++;
		}
	}
	
	if (n > m)
	{
		for (i = t1+t2; i < n+m-1; i++)
		{
			T3[i] = T1[t1];
			t1++;
		}
	}
	
	else if (n < m)
	{
		for (i = t1+t2; i < n+m-1; i++)
		{
			T3[i] = T2[t2];
			t2++;
		}
	}
	
	printf("le tableau T3:\n");
	for (i = 0; i < m+n; i++)
	{
		printf("%i|", T3[i]);
	}
	
	return 0;
}