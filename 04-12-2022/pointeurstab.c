#include <stdio.h>

int	main()
{
	char tab[20];
	char *p;
	p = tab;
	
	printf("%p\n", p);
	printf("%p", p+1);
		
	return 0;
}