#include <stdio.h>

int main()
{
	FILE * fp = fopen("abc", "r");

	int c = fgetc(fp);

	if (c == EOF)
		perror("getc");

	printf("c = %c\n", c);

	c = ungetc(48, fp);

	printf("ungetc is %c\n", c);

	c = fgetc(fp);

	printf("c = %c\n", c);

	c = fgetc(fp);

	printf("c = %c\n", c);

	return 0;
}
