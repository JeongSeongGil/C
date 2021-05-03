#include <stdio.h>


int main12() {
	int dan;

	printf("¸î ´Ü ? ");
	scanf("%d", &dan);

	for (int i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", dan, i, (dan * i));
	}
}