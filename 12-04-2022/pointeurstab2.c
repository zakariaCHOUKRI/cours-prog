#include <stdio.h>

int	main()
{
	int i, min, max;
	int p[10];

	for(i = 0; i < 10; i++) scanf("%i", p+i);

	min = *p;
	max = *p;

	for(i = 0; i < 10; i++)
	{
		if (*(p+i) < min) min = *(p+i);
		if (*(p+i) > max) max = *(p+i);
	}

	printf("le min est %i et le max est %i", min, max);

	return 0;
}