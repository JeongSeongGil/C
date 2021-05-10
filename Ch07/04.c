#include <stdio.h>

int main04() {
	while (1) {
		int a, b;
		char ch;
		printf("계산할 두 수를 입력 (Ctrl + C) :");
		scanf("%d %c %d", &a, &ch, &b);
		printf("계산할 연산자를 입력 : ");
		cmp(a, b, ch);
	}
}












int cmp(a, b, ch) {
	switch (ch) {
	case '+':
		return printf("%d + %d = %d\n", a, b, (a + b));

	case '-':
		return printf("%d - %d = %d\n", a, b, (a - b));

	case '*':
		return printf("%d * %d = %d\n", a, b, (a * b));

	case '/':
		return printf("%d / %d = %d\n", a, b, (a / b));

	case '%':
		return printf("%d %% %d = %d\n", a, b, (a % b));
	}
	
}