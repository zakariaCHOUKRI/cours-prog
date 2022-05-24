#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char append[30];
	char new_name[30];
	char elem;
	FILE *pf_old, *pf_new;
	
	pf_old = fopen("alphabet.txt", "r");
	
	printf("entrer le nom du nouveau fichier: ");
	scanf("%s", new_name);
	
	pf_new = fopen(new_name, "w");
	
	printf("entrer la chaine a ajouter: ");
	scanf("%s", append);
	
	
	while (!feof(pf_old)) fputc(fgetc(pf_old), pf_new);
	
	fprintf(pf_new, "%s", append);
	
	fclose(pf_old);
	fclose(pf_new);
	
	return 0;
}