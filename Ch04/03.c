#include <stdio.h>

int main03() {
	int a = 10;
	a++;
	printf("a++ == > %d\n", a);

	a--;
	printf("a-- == > %d\n", a);

	a += 5;
	printf("a+=5 == > %d\n", a);
	a -= 5;
	printf("a-=5 == > %d\n", a);

	a *= 5;
	printf("a*=5== > %d\n", a);

	a /= 5;
	printf("a/=5 == > %d\n", a);
	a %= 5;
	printf("a%%=5 == > %d\n", a);
}