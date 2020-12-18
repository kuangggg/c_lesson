#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

int main()
{
	
	int fd = open("abc", O_RDWR);
	
	if(fd == -1) {
		perror("can\'t open abc\n");	
	}
	
	off_t ret = lseek(fd, (off_t) 5, SEEK_SET);
	
	if(ret == (off_t) -1)
		perror("seek fail\n");

	char buf[10];

	read(fd, buf, 10);

	printf("the seek after read is :%s\n", buf);

	ret = lseek(fd, 0, SEEK_END);

	printf("offset %d\n", ret);
	
	char buf1[10];
	read(fd, buf1, 10);
	ssize_t last = read(fd, buf, 10);
	printf("the end read is %d content is %s\n", last, buf1);
	
	ret = lseek(fd, (off_t)100, SEEK_CUR);
	
	printf("%d\n", ret);
	
	close(fd);	

}
