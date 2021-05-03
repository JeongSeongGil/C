#include <stdio.h>

int main03() {
	int value;
	printf("value =  ");
	scanf("%d", &value);


	if (value < 100) {
		printf("100보다 작군요..\n");
		printf("거짓이므로 앞의 문장은 안보이겠죠?\n");
	}
	printf("프로그램 끝! \n");

}