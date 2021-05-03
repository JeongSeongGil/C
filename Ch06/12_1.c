#include <Stdio.h>

int main12_1(){

	int dan;
	while (1){

		printf("몇 단 (종료 : 0) ? ");
		scanf("%d", &dan);
		if (dan == 0) {
			break;
		}
		for (int i = 1; i < 10; i++) {
			printf("%d X %d = %d\n", dan, i, (dan * i));
		}
		printf("\n");
	}
}