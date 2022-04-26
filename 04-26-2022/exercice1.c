#include <stdio.h>

int	max_2(int a, int b);              
int	max_4(int a, int b, int c, int d);
int	max_tab(int *tab, int len);

int	main()
{
	int tab1[10] = {1, 42, 3, 4, 5, 6, 74, 8, 9, 10};
	int tab2[8] = {1, 42, 3, 46, 5, 6, 67, 8};
	int tab3[11] = {1, 2, 3, 46, 65, 6, 7, 8, 449, 10, 123};
	int tab4[9] = {1, 2, 43, 4, 5, 66, 47, 8, 610};
	
	int max1 = max_tab(tab1, 10);
	int max2 = max_tab(tab2, 8);
	int max3 = max_tab(tab3, 11);
	int max4 = max_tab(tab4, 9);
	
	printf("%i", max_4(max1, max2, max3, max4));
	
	return 0;
}

int	max_2(int a, int b)
{
	if (a > b) return a;
	return b;
}

int	max_4(int a, int b, int c, int d)
{
	return max_2(a, max_2(b, max_2(c, d)));
}

int	max_tab(int *tab, int len)
{
	int i, max = *tab;
	for (i = 0; i < len; i++)
	{
		if (*(tab+i) > max) max = *(tab+i);
	}
	return max;
}