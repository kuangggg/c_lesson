#include <stdio.h>

int main()
{
	
	char str[30];

	FILE *fp;

	fp = fopen("abc", "r");	
	
	if(fp == NULL)
		perror("fopen");
	
	fgets(str, 10, fp);

	puts(str);

	fclose(fp);

	return 0;
}
