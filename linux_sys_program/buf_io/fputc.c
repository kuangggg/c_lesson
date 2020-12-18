#include <stdio.h>

int main()
{
	
	FILE *fp = fopen("abc", "w+");

	if(fputc(49, fp) == EOF) {
		perror("fputc");	
	}

	return 0;
}
