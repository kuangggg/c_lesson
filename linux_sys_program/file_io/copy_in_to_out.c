#include <stdio.h>
#include <unistd.h>

#define BUFSIZE 5

int main()
{
	char buf[BUFSIZE];

	int n;

	while((n = read(0, buf, BUFSIZE)) > 0)
		write(1, buf, n);

	return 0;
}
