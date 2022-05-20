#include <stdio.h>

struct complexe { float re; float im; };
typedef struct complexe COMPLEXE;

int main()
{
	COMPLEXE C1;
	void fonction(COMPLEXE *x);
	
	C1.re = 2; C1.im = 32.5;
	printf("avant appel de fonction: %f %f\n", C1.re, C1.im);
	
	fonction(&C1);
	printf("valeur apres la fonction: %f %f", C1.re, C1.im);
}

void fonction(COMPLEXE *x)
{
	x -> re = 0; x -> im = 1;
	printf("valeur dans la fonction: %f %f\n", x -> re, x -> im);
}