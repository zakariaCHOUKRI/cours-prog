#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char c;
	fp = fopen("alphabet.txt", "r");
	char tab[53];
	int i = 0;
	
	while (!feof(fp))
	{
		c = fgetc(fp);
		if (c != ' ')
		{
			tab[i] = c;
			i++;
		}
	}
	
	printf("%s", tab);
	
	fclose(fp);
	
	return 0;
}