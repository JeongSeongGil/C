#include <stdio.h>


int main15() {
	for (int i = 1; i < 10; i++) {
		for (int j = 2; j < 6; j++) {
		printf("%d X %d = %d\t", j, i, (j * i));
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i < 10; i++) {
		for (int j = 6; j < 10; j++) {
			printf("%d X %d = %d\t", j, i, (j * i));
		}
		printf("\n");
	}
}