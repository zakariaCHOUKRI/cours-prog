#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char notes[20];
	char noms[20][20];
	int i;
	float moyenne;
	
	FILE *fp;
	fp = fopen("notes.txt", "r");
	
	while(!feof(fp))
	{
		fscanf(fp, "%s", noms[i]);
		fscanf(fp, "%s", notes);
		moyenne += atoi(notes);
	}
	
	moyenne = moyenne/20;
	
	printf("%f", moyenne);
	
	fclose(fp);
	
	return 0;
}