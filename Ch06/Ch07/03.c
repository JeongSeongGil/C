#include <stdio.h>
int sum(a, b) {
	return (a + b);
}
int main03() {
	
	while (1) {
		int a, b;
		printf("a + b : ");
		scanf("%d %d", &a, &b);
		if (a == -1 || b == -1) {
			break;
		}
		printf("%d\n", sum(a, b));
	}
}