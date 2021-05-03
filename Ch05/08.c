#include <stdio.h>

int main08() {
	int value;
	printf("점수를 입력하세요 (0 ~ 100) :");
	scanf("%d", &value);

	if (value <= 100) {

	if (value >= 90) {
		printf("%d / A", value);
	}
	else if (value >= 80) {
		printf("%d / B", value);
	}
	else if (value >= 70) {
		printf("%d / C", value);
	}
	else if (value >= 60) {
		printf("%d / D", value);
	}
	else{
		printf("%d / F", value);
	}
	}
	else {
		printf("100이하의 값을 입력하세요\n");
	}

	return 0;
}