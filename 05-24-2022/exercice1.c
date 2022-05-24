#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int nombre_char(FILE *pf);
int nombre_mots(FILE *pf);
int nombre_lignes(FILE *pf);

int main()
{	
	FILE *pf = fopen("ex1.txt", "r");
	int chars = nombre_char(pf);
	printf("%i", chars);

	fclose(pf);
	
	return 0;
}

int nombre_char(FILE *pf)
{
	int count = 0;
	char elem;
	
	while (!feof(pf))
	{
		elem = fgetc(pf);
		count++;
	}
	return count;
}

int nombre_mots(FILE *pf)
{
	int count = 0;
	char elem[30];
	
	while (!feof(pf))
	{
		fscanf(pf, "%s", elem);
		count++;
	}
	return count;
}

int nombre_lignes(FILE *pf)
{
	int count = 0;
	char elem[100];
	
	while (!feof(pf))
	{
		fgets(elem, 100, pf);
		count++;
	}
	return count;
}