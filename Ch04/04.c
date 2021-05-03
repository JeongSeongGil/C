#include <stdio.h>
int main04() {
	int a = 10, b;
	b = a++; // 1. b에 a값 넣기 2. a 증가
	printf("b = a++\n");
	printf("b = %d\n", b);
	printf("a = %d\n\n", a);

	a = 10;
	b = ++a; // 1. a 증가 2. b에 a값 넣기
	printf("b = ++a\n");
	printf("b = %d\n", b);
	printf("a = %d\n", a);
}