#include <stdio.h>
#include <math.h>

typedef struct {
	char nom;
	int x, y;
} point;

float perimetre(point A, point B, point C);
float distance(point A, point B);

int main()
{
	point A, B, C;
	A.nom = 'A';
	B.nom = 'B';
	C.nom = 'C';
	float peri;

	printf("entrer xA: ");
	scanf("%i", &A.x);
	printf("entrer yA: ");
	scanf("%i", &A.y);
	printf("entrer xB: ");
	scanf("%i", &B.x);
	printf("entrer yB: ");
	scanf("%i", &B.y);
	printf("entrer xC: ");
	scanf("%i", &C.x);
	printf("entrer yC: ");
	scanf("%i", &C.y);
	
	peri = perimetre(A, B, C);
	
	printf("le perimetre est %f", peri);
	
	return 0;
}

float distance(point A, point B)
{
	return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
}

float perimetre(point A, point B, point C)
{
	return distance(A, B) + distance(B, C) + distance(C, A);
}