#include <stdio.h>

int	main()
{
	char sentence[50];
	char c1, c2;
	int i, counter;
	
	printf("Enter your sentence:\n");
	gets(sentence);
	
	printf("Enter two characters to be deleted:\n");
	scanf("%c %c", &c1, &c2);
	
	printf("Entered characters are: %c et %c", c1, c2);
	
	counter = 0;
	i = 0;
	while (sentence[i])
	{
		if (sentence[i] != c1 && sentence[i] != c2)
		{
			sentence[counter] = sentence[i];
			counter++;
		}
		i++;
	}
	
	
	printf("\nthe new sentence is:\n");
	sentence[counter] = '\0';
	printf("%s", sentence);

	return 0;
}