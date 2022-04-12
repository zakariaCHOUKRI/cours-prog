#include	<stdio.h>
#include	<string.h>

int	main()
{
	char CH1[30] = "abcee";
	char CH2[30] = "azeaze";
	int c1, c2, taille, taille1, taille2, i, diff;
	c1 = strcmp(CH1, CH2);
	taille = 0;
	diff = 0;

	printf("%d\n", c1);
	printf("CH1\t=\t\"%s\"\n",CH1);
	printf("CH2\t=\t\"%s\"\n",CH2);

	if (taille1 > taille2) taille = 1;
	else if (taille1 < taille2) taille = 2;

	if (taille == 0)
	{
		i = 0;
		while (CH1[i])
		{
			diff += CH1[i] - CH2[i];
			i++;
		}
		c2 = diff;
	}

	else if (taille == 1)
	{
		i = 0;
		while (CH1[i])
		{
			diff += CH1[i] - CH2[i];
			i++;
		}
		c2 = diff;
		if (diff = 0) c2 = taille2 - taille1;
	}

	else if (taille == 2)
	{
		i = 0;
		while (CH2[i])
		{
			diff += CH1[i] - CH2[i];
			i++;
		}
		c2 = diff;
		if (diff = 0) c2 = taille1 - taille2;
	}

	printf("%d\n", c2);
	printf("CH1\t=\t\"%s\"\n",CH1);
	printf("CH2\t=\t\"%s\"\n",CH2);

	return 0;
}