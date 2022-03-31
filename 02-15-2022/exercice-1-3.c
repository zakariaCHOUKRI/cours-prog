#include <stdio.h>

/* Ce programme calcule la somme de 3 nombres
entiers introduits au clavier.
*/
int main()
{
int NOMBRE, SOMME, COMPTEUR;
	
	/* Initialisation des */ /*variables */
	SOMME = 1;
	COMPTEUR = 0;
	/* Lecture des données */
	while (COMPTEUR < 3)
		{
			/* Lire la valeur du nombre suivant */
			printf("Entrez un nombre entier :") ;
			scanf("%i", &NOMBRE);
			/* Ajouter le nombre au résultat */
			SOMME += NOMBRE;
			/* Incrémenter le compteur */
			COMPTEUR++;
		}
	/* Affichage du résultat à l'écran */
	printf("La somme est: %i \n", SOMME);
	return 0;
}