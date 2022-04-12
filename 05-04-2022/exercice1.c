#include	<stdio.h>
#include	<string.h>

int	main()
{
	char list[100][30];
	char temp[30];
	int i = 0, j, k, fin, fin2;

	printf("veuillez entrer des prenoms:\n");

	while ((strcmp(list[i-1], "ok")))
	{
		scanf("%s", list[i]);
		i++;
	}

	fin = i - 1;

	printf("\nles prenoms qui ont plus de 8 lettres sont:\n");
	for (j = 0; j < fin; j++)
	{
		if (strlen(list[j]) > 8)printf("%s\n", list[j]);
	}

	for (fin2 = fin-1; fin2 > 0; fin2--)
	{
		for (j = 0; j < fin2 ; j++)
		{
			if (strcmp(list[j], list[j+1]) > 0)
			{
				strcpy(temp, list[j]);
				strcpy(list[j], list[j+1]);
				strcpy(list[j+1], temp);
			}
		}
	}

	printf("\nles prenoms tries sont:\n");
	for (j = 0; j < fin; j++)
	{
		printf("%s\n", list[j]);
	}
	return 0;
}