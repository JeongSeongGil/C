#include <stdio.h>


int main06() {
	int a = 100;
	while (a == 200) {
		printf("while문 내부에 들어 왔습니다.\n");
		a++;
	}
	do {
		printf("do ~ while문 내부에 들어 왔습니다.\n");

	} while (a == 200);

}