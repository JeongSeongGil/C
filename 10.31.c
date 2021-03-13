#include <stdio.h>

int main()
{
	printf ("0%Lo\n", 017L);
	printf ("0%%luo\n", 017UL);
	printf ("0%lX\n", 0x7fffffL);
	printf ("0x%lx\n", 0xffffffffUL);
	
	return 0;
}
