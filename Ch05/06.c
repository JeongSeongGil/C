#include <stdio.h>


int main06() {
	int value;
	printf("정수를 입력하세요 : ");
	scanf("%d", &value);

	if (value % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}


}
