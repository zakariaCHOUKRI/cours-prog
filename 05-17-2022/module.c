#include <stdio.h>
#include <math.h>

struct complexe { float re; float im; };
typedef struct complexe COMPLEXE;

void fonction(COMPLEXE *x);
float module(COMPLEXE x);

int main()
{
	COMPLEXE C1;
	C1.im = 4;
	C1.re = 3;
	
	printf("%f", module(C1));
}

void fonction(COMPLEXE *x)
{
	x -> re = 0; x -> im = 1;
	printf("valeur dans la fonction: %f %f\n", x -> re, x -> im);
}

float module(COMPLEXE x)
{
	return sqrt(x.re*x.re + x.im*x.im);
}