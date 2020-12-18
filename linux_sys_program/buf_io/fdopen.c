#include <stdio.h>
#include <fcntl.h>

int main()
{
	FILE *fp;

	int fd = open("abc", O_RDONLY);

	if(fd == -1)
		perror("open");

	fp = fdopen(fd, "r");

	fclose(fp);

	return 0;
}
