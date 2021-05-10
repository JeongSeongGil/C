#include <stdio.h>

int main02() {
	int i;
	scanf("%d", &i);
	int sum = 0;
	while (i > 0) {
		sum += i;
		i--;
	}
	printf("sum : %d\n", sum);
}