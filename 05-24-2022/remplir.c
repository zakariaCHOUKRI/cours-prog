#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vals[20] = {1, 54, 32, 65, 46, 598, 79, 865, 46, 465, 46, 84, 65, 4, 6854, 6, 534, 654, 15, 54};
	int i;
	char c, ans;
	
	FILE *fp;
	fp = fopen("ints.txt", "w");
	
	for (i = 0; i < 20; i++)
	{
		fprintf(fp, "%i ", vals[i]);
	}
	
	puts("reremplir ? [y/n]");
	c = getchar();
	
	if (c == 'y')
	{
		fprintf(fp, "\n");
		for (i = 20-1; i >= 0; i--)
		{
			fprintf(fp, "%i ", vals[i]);
		}
	}
	
	fclose(fp);
	
	return 0;
}