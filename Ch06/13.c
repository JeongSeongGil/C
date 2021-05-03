#include <stdio.h>

int main13() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("중첩 for문입니다. (i값 : %d | j값 : %d\ni+j = %d\n", i, j, (i + j));
		}
	}
}