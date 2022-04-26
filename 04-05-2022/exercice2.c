#include	<stdio.h>
#include	<string.h>

int	main()
{
	int i, j, k, w, l1, l2, l, lh, z, found = 0;
	char ch1[50], ch2[50], ch[50], h[50], temp[50];
	scanf("%s", ch1);
	scanf("%s", ch2);
	scanf("%s", ch);
	
	l1 = 0;
	while (ch1[l1]) l1++;
	
	l2 = 0;
	while (ch2[l2]) l2++;
	
	l = 0;
	while (ch[l]) l++;

	j = l - l1;
	for (i = 0; i < l; i++)
	{
		if (found) break;
		for (j = 0; j < l1; j++)
		{
			temp[j] = ch[i+j];
		}
		
		if (!(strcmp(temp, ch1)))
		{
			found = 1;
			break;
		}
	}
	
	for (w = 0; w < l2; w++) h[w] = ch[w+i+l2-1];
	lh = 0;
	while (h[lh]) lh++;
	
	for (k = i; k < i+l2; k++) ch[k] = ch2[k-i];
	
	for (z = 0; z < lh; z++) ch[z+i+l2+lh-2] = h[z];
	
	printf("%s", ch);

	return 0;
}