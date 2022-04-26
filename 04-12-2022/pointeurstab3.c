#include <stdio.h>

int	main()
{
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p;
	p = tab;

	printf("1)\t%i\n", *p+3);
	printf("2)\t%i\n", *(p+4));
	printf("3)\t%i\n", p+1);
	printf("4)\t%i\n", &tab[5]-3);
	printf("5)\t%i\n", tab+4);
	printf("6)\t%i\n", p+(*p+2));
	printf("7)\t%i\n", *(p+*(p+6)-tab[5]));

	return 0;
}