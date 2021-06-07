#include <stdio.h>
int plus(int v1, int v2); // 프로토타입 매개 변수 ( 본문( {} )이 있다면 사용 불가

int main04() {
	int sum;
	printf("sum = %d", plus(100, 200));
}


int plus(int v1, int v2) {
	return (v1 + v2);
}