#include <stdio.h>

int main02() {
	int aa[4] = {0, };
	int sum = 0;

	for (int i = 0; i < 8; i++) {
		if (i > 3) {
			printf("%d번째 숫자 : %d\n",i-3,  aa[i - 4]);
			continue;
		}
		printf("%d번째 숫자를 입력하세요 : ", i + 1);
		scanf("%d", &aa[i]);
		sum += aa[i];
	}
	printf("result : %d", sum);
	

}