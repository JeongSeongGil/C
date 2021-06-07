#include <stdio.h>

int calc(int a, int b, char oper);
int main05() {
	int a, b;
	char oper;
	printf("계산할 수를 입력하세요 (A B) : ");
	scanf("%d %d", &a, &b);
	printf("연산자를 입력하세요 ( + - * / %% ) : ");
	scanf("%c", &oper);
	scanf("%c", &oper);
	printf("%d %c %d = %d", a, oper, b, calc(a, b, oper));

}

int calc(int a, int b, char oper) {
	switch (oper)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '*':
		return a * b;
	case '/':
		return a / b;
	case '%':
		return a % b;
	}

}