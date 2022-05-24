#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char remove[30] = "located";
	char new_name[30];
	FILE *pf_old, *pf_new;
	char elem[30];
	
	pf_old = fopen("um6p.txt", "r");
	
	printf("entrer le nom du nouveau fichier: ");
	scanf("%s", new_name);
	
	pf_new = fopen(new_name, "w");

	while (!feof(pf_old))
	{
		fscanf(pf_old, "%s", elem);
		if (strcmp(elem, remove))
		{
			fprintf(pf_new, "%s ", elem);
		}
	}
	
	fclose(pf_old);
	fclose(pf_new);
	
	return 0;
}