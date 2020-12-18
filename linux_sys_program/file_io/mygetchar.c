#include <unistd.h>
#include <stdio.h>

int main()
{
	char i = mygetchar();
	printf("%c\n", i);
	return 0;
}

int mygetchar(void)
{
	char c;
	return (read(0, &c, 1) == 1 ? (unsigned char) c : EOF);
}
