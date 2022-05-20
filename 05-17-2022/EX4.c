#include <stdio.h>
#include <string.h>

typedef struct{
	char nom[15];
	int age, taille;
} personne;

void Creer_Personne(personne *per, char *nom, int age, int taille);
void Afficher_Personne(personne P);

int main()
{
	personne moi;
	Creer_Personne(&moi, "zakaria", 18, 173);
	Afficher_Personne(moi);
	return 0;
}

void Creer_Personne(personne *per, char *nom, int age, int taille)
{
	strcpy(per -> nom, nom);
	per -> age = age;
	per -> taille = taille;
}

void Afficher_Personne(personne P)
{
	printf("%s %i ans %i cm\n", P.nom, P.age, P.taille);
}