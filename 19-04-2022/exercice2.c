#include <stdio.h>
#include <string.h>

int	main()
{
	char alph[27] = "abcdefghijklmnopqrstuvwxyz";
	char ch[30] = "Bon ramadan";
	char *pa = alph;
	char *pc = ch;
	int i, j, taillealp, taille, count;
	
	taillealp = strlen(alph);
	taille = strlen(ch);
	
	i = 0;
	while (*(pa+i))
	{
		j = 0;
		count = 0;
		while (*(pc+j))
		{
			if (*(pc+j) == *(pa+i) || *(pc+j) == *(pa+i) - 32) count++;
			j++;
		} 
		if (count) printf("\'%c\' apparait %i\t fois\n", *(pa+i), count);
		i++;
	}
	

	return 0;
}