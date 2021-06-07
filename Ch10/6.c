#include <stdio.h>

int a = 100; // 전역변수 선언
int *b = &a;

void func1() {
	int a = 200; // func1안에서의 a
	printf("func1()에서 a의 값 == > %d\n", a);
	*b = 300; // 포인터 변수 b (전역변수 a의 주소값)에 300을 저장

}

int main06() {
	func1();
	printf("main()에서 a의 값 == > %d\n", a);
}