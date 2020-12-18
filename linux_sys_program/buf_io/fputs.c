#include <stdio.h>

int main()
{
	FILE *fp = fopen("abc", "a+");
	
	if(!fp)
		perror("fopen");

	if(fputs("hello world\n", fp) == EOF) {
		perror("fputs");	
	}

	char *str[100];

	if(fgets(str, 5, fp) == EOF)
		perror("fgets");

	printf("%s\n", fp);

	return 0;
}
