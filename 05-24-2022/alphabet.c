#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char c;
	fp = fopen("alphabet.txt", "w");
	
	for (c = 'a'; c <= 'z'; c++) fputc(c, fp);

	fputc('\n', fp);
	
	for (c = 'A'; c <= 'Z'; c++) fputc(c, fp);
	
	fclose(fp);
	
	return 0;
}