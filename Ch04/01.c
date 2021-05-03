#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}
int main01() {
	float a;
	int b = 5, c = 3;

	a = (float)b / c;

	printf("%d / %d = %f\n", b, c, a);
	printf("%d + %d = %d", b, c, sum(b, c));
}