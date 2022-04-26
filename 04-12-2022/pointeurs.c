#include <stdio.h>

int	main()
{
	int a = 10, b = 20, c = 30;
	int *p1, *p2;

	p1 = &a;
	printf("1)\t%i\t%i\t%i\n", a, b, c);
	
	p2 = &c;
	printf("2)\t%i\t%i\t%i\n", a, b, c);
	
	*p1 = (*p2)++;
	printf("3)\t%i\t%i\t%i\n", a, b, c);
	
	p1 = p2;
	printf("4)\t%i\t%i\t%i\n", a, b, c);
	
	p2 = &b;
	printf("5)\t%i\t%i\t%i\n", a, b, c);
	
	*p1 -= *p2;
	printf("6)\t%i\t%i\t%i\n", a, b, c);
	
	++*p2;
	printf("7)\t%i\t%i\t%i\n", a, b, c);
	
	*p1 *= *p2;
	printf("8)\t%i\t%i\t%i\n", a, b, c);
	
	a = ++*p2**p1;
	printf("9)\t%i\t%i\t%i\n", a, b, c);
	
	p1 = &a;
	printf("10)\t%i\t%i\t%i\n", a, b, c);
	
	*p2 = *p1;
	printf("11)\t%i\t%i\t%i\n", a, b, c);
	
	return 0;
}