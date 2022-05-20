#include <stdio.h>
#include <string.h>

typedef struct{
	char nom[15];
	char prenom[15];
	int age;
} personne;

int main()
{
	personne tab[10];
	personne ajout;
	int i, size = 0, pos;
	
	for (i = 0; i < 4; i++)
	{
		printf("entrer le nom de personne %i: ", i);
		scanf("%s", &tab[i].nom);
		printf("entrer le prenom de personne %i: ", i);
		scanf("%s", &tab[i].prenom);
		printf("entrer l\'age de personne %i: ", i);
		scanf("%i", &tab[i].age);
		size++;
	}
	
	printf("avant ajout:\n");
	for (i = 0; i < size; i++) printf("(%s %s %i ans)\n", tab[i].nom, tab[i].prenom, tab[i].age);
	
	printf("entrer le nom de personne a ajouter: ", i);
	scanf("%s", &ajout.nom);
	printf("entrer le prenom de personne a ajouter: ", i);
	scanf("%s", &ajout.prenom);
	printf("entrer l\'age de personne a ajouter: ", i);
	scanf("%i", &ajout.age);
	
	printf("entrer la position ou ajouter: ");
	scanf("%i", &pos);
	
	for (i = size; i > pos; i--) tab[i] = tab[i-1];
	
	size++;
	tab[i] = ajout;

	printf("apres ajout:\n");
	for (i = 0; i < size; i++) printf("(%s %s %i ans)\n", tab[i].nom, tab[i].prenom, tab[i].age);
	
	return 0;
}