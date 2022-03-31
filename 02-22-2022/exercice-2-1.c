#include <stdio.h>
#include <math.h>

int	main()
{
	float a, b, c, delta, s1, s2, sr, s1i, s2i, s3;
	printf("donner les coefficients de l\'equation sous la forme \"a b c\":\n");
	scanf("%f %f %f", &a, &b, &c);
	
	delta = b*b - 4*a*c;
	
	s1 = (-b + sqrt(delta))/(2*a);
	s2 = (-b - sqrt(delta))/(2*a);
	
	sr = (-b)/(2*a);
	s1i = (-sqrt(abs(delta)))/(2*a);
	s2i = (sqrt(abs(delta)))/(2*a);
	
	s3 = (-b)/2;
	
	printf("\ndelta = %f\n\n", delta);
	
	printf("si delta >= 0, les solutions sont:\n%f\n%f\n\n", s1, s2);
	
	printf("sinon, les solutions sont:\n%f%fi\n%f+%fi", sr, s1i, sr, s2i);
	
	printf("\n\nsi a = 0, la solution est:\n%f", s3);
	
	return 0;
}