#include <stdio.h>
#include <string.h>

void	inverse(char *string);

int	main()
{
	char str[] = "he";
	printf("%s\n", str);
	inverse(str);
	printf("%s", str);
	return 0;
}

void	inverse(char *string)
{
	if (strlen(string) == 2)
	{
		char temp = string[0];
		string[0] = string[1];
		string[1] = temp;
	}
	else
	{
		int len = strlen(string);
		char last = string[len - 1];
		char strtemp1[] = "";
		
	}
}