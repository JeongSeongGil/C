#include <stdio.h>

int main01() {
	int i = 0;
	while (i < 5) {
		i++;
		printf("%d : while문을 연습합니다\n", i);
	}
	for (; i < 11;) {
		printf("%d : for 문을 연습합니다\n", i);
		i++;
	}

}