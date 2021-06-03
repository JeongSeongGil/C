#include <stdio.h>

int main01() {
	char stack[5] = { 0, };
	int top = 0;
	stack[top] = 'A';
	printf("자동차 %c가 들어감\n", stack[top]);
	top++;
	stack[top] = 'B';
	printf("자동차 %c가 들어감\n", stack[top]);
	top++;
	stack[top] = 'C';
	printf("자동차 %c가 들어감\n\n", stack[top]);
	top++;

	top--;
	printf("자동차 %c가 빠져나감\n", stack[top]);
	top--;
	printf("자동차 %c가 빠져나감\n", stack[top]);
	top--;
	printf("자동차 %c가 빠져나감\n", stack[top]);

}