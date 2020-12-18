#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>


int main()
{
	int fd = open("abc", O_RDWR);

	int flag =  ftruncate(fd, (off_t)4);

	printf("%d\n", flag);

	return 0;
}
