#include <stdio.h>

int main08() {
	char s[8] = "Basic-C";
	char* p;
	p = s;
	printf("&s[3] == > %s\n", &s[3]); // s[3]의 주소부터 \0을 만날 때까지 값을 찍는다 (%s)
	printf("p+3 == > %s\n", p+3);
	printf("s[3] == > %c\n", s[3]);
	printf("*(p+3) == > %c", *(p + 3));
}