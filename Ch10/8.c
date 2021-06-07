#include <stdio.h>

int func2(int a) {
	a += 1;
	printf("전달 받은 값 a : %d\n", a);
	return a;

}

int main08() {
	int a = 10;
	func2(a);
	printf("func2()실행 후 값 a : %d", a);
}