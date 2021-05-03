#include <stdio.h>


int main11() {
	int start_num, end_num, num;

	printf("값을 입력하세요 (start_num, end_num, num) : ");
	scanf("%d %d %d", &start_num, &end_num, &num);
	int sum = 0;
	for (int i = start_num; i <= end_num; i += num) {
		sum += i;
	}
	printf("Sum : %d", sum);
}