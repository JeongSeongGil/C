#include <stdint.h>


int main082() {
	int value;
	printf("점수를 입력하세요 (0 ~ 100) :");
	scanf("%d", &value);
	if (value > 100) {
		return printf("100이하의 값을 입력하세요.\n");
	}
	if (value >= 90) {
		printf("%d / A", value);
	}
	else if (value >= 60) {
		printf("%d / B", value);
	}
	else{
		printf("%d / C", value);
	}

}