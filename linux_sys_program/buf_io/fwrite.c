#include <stdio.h>
#include <string.h>

#define LEN 5 

int main()
{
	FILE *fp = fopen("abc", "a+");
	
	char *buf = "hello kuange";	
	int n = fwrite(buf, strlen(buf), 1, fp);
	printf("the input block num is %d\n", n);
	fseek(fp, 0, SEEK_SET);

	char buf1[LEN];	
	fread(buf1, LEN, 1, fp);
	buf1[LEN-1] = '\0';
	printf("the content is %s\n", buf1);
	return 0;
}
