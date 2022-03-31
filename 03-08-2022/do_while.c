#include <stdio.h>

int	main()
{
	int A, B; 
	float C;
	
	printf("veuillez entrer B\n");
	scanf("%i", &B);
	
	do
	{
		printf("veuillez entrer A\n");
		scanf("%i", &A);
	}
	while(A == 0);
	
	C = (float)B/A;
	printf("%i / %i = %f", B, A, C);
}