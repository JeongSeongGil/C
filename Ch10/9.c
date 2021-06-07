#include <stdio.h>

void func3(int* b) { // 포인터 변수 *b에 a의 주소값 받기
	*b += 1; // b = 주소값, *b = 주소값에 저장된 값 (10) / 10 + 1
	printf("전달받은 b ==> %d\n", *b);
}

int main() {
	int b = 10;
	func3(&b); // a의 주소값을 전달
	printf("func3() 실행 후 b ==> %d\n", b);
}