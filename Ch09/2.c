#include <stdio.h>
#include <string.h>

int main02() {
	char stack[5];
	int top = 0;
	char carName = 'A';

	int select = 9;
	
	while (select != 3) {
		printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 종료 : ");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			if (top >= 5) {
				printf("터널이 꽉 차서 차가 못 들어감\n");

			}
			else {
				stack[top] = carName++;
				printf("자동차 %c가 터널에 들어감\n", stack[top]);
				top++;
			}
			break;

		case 2:
			if (top <= 0) {
				printf("빠져나갈 자동차가 없음\n");

			}
			else {
				top--;
				printf("자동차 %c가 빠짐\n", stack[top]);
				stack[top] = "\0";
			}
			break;
		case 3:
			printf("현재 터널에 %d대가 있음", top);
			printf("프로그램 종료\n");
			break;
		default:
			printf("잘못 입력했습니다\n");
		}
		
	}	
}


