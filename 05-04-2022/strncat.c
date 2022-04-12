#include	<stdio.h>
#include	<string.h>

int	main()
{
	char CH[6] = "Hello";
	char CH_add[8] = " world!";
	strncat(CH, CH_add, 30);
	printf("CH\t=\t\"%s\"\n",CH);
	printf("CH_add\t=\t\"%s\"\n",CH_add);
	
	return 0;
}