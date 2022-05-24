#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char nom_fichier[20];
	
	printf("saisir le nom du fichier a ouvrir: ");
	gets(nom_fichier);
	
	fp = fopen(nom_fichier, "w");
	
	if (fp == NULL)
	{
		printf("impossible d\'ouvrir le fichier %s", nom_fichier);
		exit(-1);
	}
	
	printf("le fichier %s a ete ouvert avec succes", nom_fichier);
	fclose(fp);
	
	return 0;
}