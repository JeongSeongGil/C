#include <stdio.h>


int main10() {
	int sum = 0;
	int count;
	printf("값 입력 : ");
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		sum += i;

	}
	printf("1~ %d까지의 SUM : %d", count, sum);
}