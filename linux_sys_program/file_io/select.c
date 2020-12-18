#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

int main()
{
	struct timeval tv;
	tv.tv_sec = 5;
	tv.tv_usec = 0;

	fd_set readfds;
	
	//借用 select 实现延迟
	//int ret = select(0, NULL, NULL, NULL, &tv);
	FD_ZERO(&readfds);
	FD_SET(STDIN_FILENO, &readfds);
	int ret = select(STDIN_FILENO + 1, &readfds, NULL, NULL, &tv);
	
	printf("%d\n", ret);
	return 0;
}
