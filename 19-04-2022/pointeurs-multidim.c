#include <stdio.h>

int	main()
{
	int t1[4][4] = {{1, 2, 0, -1}, {-1, 0, 1, 1}, {0, 0, 2, 1}, {1, 1, -1, 2}};
	int *p = (int*)t1;
	int i = 0;
	
	while (i < 4*4)
	{
		printf("%i|", *(p+i));
		i++;
	}

	return 0;
}