#include <stdio.h>

int main07() {
	int i, sum = 0;

	for (int i = 1; i < 101; i++) {
		sum += i;

		if (sum >= 1000) {
			printf("%d", i);
			break;
		}
	}
}