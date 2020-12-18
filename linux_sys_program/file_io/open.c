#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define FILE "abc"
#define LEN 5
#define BUFF_SIZE 100

int main()
{
	//int fd = open("abc", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	//int fd = creat("abc", 0644);
	//int fd = open(FILE, O_RDWR | O_CREAT | O_TRUNC, 0644);
	int fd = open(FILE, O_RDWR | O_CREAT | O_APPEND, 0644);

	if(fd == -1) {
		perror("can\'t open abc");	
		//printf("%s\n", strerror(errno));
	}
	
	char buf[BUFF_SIZE];	
	ssize_t count = read(fd, buf, LEN);
	
	printf("the num read is %d\n", count);
	printf("%s\n", buf);

	char input[BUFF_SIZE] = "hello world";

	ssize_t writed = write(fd, input, LEN);

	close(fd);

	printf("the num write is %d\n", writed);
	//printf("%s\n", buf);

	return 0;
}



