#include <stdio.h>

int main07() {
	int sum = 0, count;
	printf("마지막 수를 입력 ==> ");
	scanf("%d", &count);

	for (int i = 1; i < (count + 1); i++) {
		sum += i;
	}

	printf("SUM : %d", sum);
}