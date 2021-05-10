#include <stdio.h>


int main10() {
	int sum = 0;

	for (int i = 1; i < 101; i++) {
		if(i % 3 == 0) {
			continue;
		}
		sum += i;
	}
	/* return 0; */
	printf("%d", sum);
}