#include <stdio.h>

typedef struct {
	int xa, ya, xb, yb;
	float xm, ym;
} milieu;

int main()
{
	milieu m;
	printf("entrez xa: ");
	scanf("%i", &m.xa);
	printf("entrez ya: ");
	scanf("%i", &m.ya);
	printf("entrez xb: ");
	scanf("%i", &m.xb);
	printf("entrez yb: ");
	scanf("%i", &m.yb);
	
	m.xm = (m.xa + m.xb)/2.0;
	m.ym = (m.ya + m.yb)/2.0;
	
	printf("M(%f,%f)", m.xm, m.ym);
}