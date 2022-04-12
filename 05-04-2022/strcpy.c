#include	<stdio.h>
#include	<string.h>

int	main()
{
	char CH1[30] = "Hello World!";
	char CH2[30] = "World Hello!";
	char CH_tmp[30];
	
	printf("CH1 = %s\n", CH1);
	printf("CH2 = %s\n\n", CH2);
	
	strcpy(CH_tmp, CH2);
	strcpy(CH2, CH1);
	strcpy(CH1, CH_tmp);
	
	printf("CH1 = %s\n", CH1);
	printf("CH2 = %s\n", CH2);

	return 0;
}