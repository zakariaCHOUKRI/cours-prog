#include <stdio.h>
#include <string.h>

typedef struct{
	char nom[30];
	int age;
} personne;

int main()
{
	int i, j;
	personne tab[10];
	
	/*
	personne zak, zineb, omar, yassir, imane;
	strcpy(zak.nom, "zak"); zak.age = 12;
	strcpy(zineb.nom, "zineb"); zineb.age = 162;
	strcpy(omar.nom, "omar"); omar.age = 25;
	strcpy(yassir.nom, "yassir"); yassir.age = 300;
	strcpy(imane.nom, "imane"); imane.age = 18;
	
	tab[0] = zak;
	tab[1] = zineb;
	tab[2] = omar;
	tab[3] = yassir;
	tab[4] = imane;
	*/
	
	for (i = 0; i < 10; i++)
	{
		printf("entrer le nom %i:", i);
		scanf("%s", &tab[i].nom);
		printf("entrer l\'age %i:", i);
		scanf("%i", &tab[i].age);
	}
	

	j = 0;
	i = 0;
	while (i < 10)
	{
		tab[j] = tab[i];
		if (tab[i].age < 30) j++;
		i++;
	}
	
	for (i = 0; i < j; i++) printf("(%s,%i)", tab[i].nom, tab[i].age);
	
	
	return 0;
}