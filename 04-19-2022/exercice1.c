#include <stdio.h>
#include <string.h>

int	main()
{
	char ch[30];
	char *p = ch;
	char c;
	int i, j, taille = strlen(p);
	
	puts("entrer une chaine de caracteres");
	gets(ch);
	puts("entrer un caractere");
	c = getchar();

	i = j = 0;
	while (*(p+i))
	{
		if (*(p+i) != c)
		{
			*(p+j) = *(p+i);
			j++;
		}
		i++;
	}
	
	*(p+j) = '\0';
	
	printf("%s", p);
	
	return 0;
}