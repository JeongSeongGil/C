#include <stdio.h>


int main07 () {
	int value;
	scanf("%d", &value);

	if (value > 50) {
		if (value < 100) {
			printf("50보다 크고 100보다 작군요..\n");
			
		}
		else {
			printf("100보다 크군요\n");
		}
		
	}
	else {
		printf("50보다 작군요\n");
	}
}