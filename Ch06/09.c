#include <stdio.h>

int main09() {
	int sum = 0;
	
	for (int i = 500; i < 1000; i++) {
		if (i % 2 != 0) {
		sum += i;
		}


	}
	printf("500에서 1000까지의 홀수의 합 : %d \n", sum);
}