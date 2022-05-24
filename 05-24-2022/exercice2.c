#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nom[30];
	char matiere[30];
	int note;
} notes;

void enregistrer(FILE *pf, notes *tab);

int main()
{
	FILE *pf = fopen("data.txt", "r");
	notes tab[5];
	
	enregistrer(pf, tab);
	printf("%s %s %i", tab[0].nom, tab[0].matiere, tab[0].note);
	
	fclose(pf);
	
	return 0;
}

void enregistrer(FILE *pf, notes *tab)
{
	char nom[20];
	char matiere[20];
	char notec[20];
	int i, note;
	
	i = 0;
	while (!feof(pf))
	{
		fscanf(pf, "%s", nom);
		strcpy(tab[i].nom, nom);
		fscanf(pf, "%s", matiere);
		strcpy(tab[i].matiere, matiere);
		fscanf(pf, "%s", notec);
		tab[i].note = atoi(notec);
		i++;
	}
}