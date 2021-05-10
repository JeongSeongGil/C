#include <stdio.h>


int main05() {
	int menu2;
	int i = 0;
	do {
		i++;
		printf("%d 번 손님 주문하시겠습니까? \n", i);
		printf("<1>바닐라라떼 <2>카푸치노 <3>아메리카노 <4>그만시킬래요 ==> ");
		scanf("%d", &menu2);
		menu_select(menu2);
		if (menu2 < 1 || menu2 > 3) {
			i--;
		}
	} while (menu2  != 4);




}

int menu_select(a) {
	switch (a)
	{
	case 1:
		return printf("# 바닐라라떼 주문하셨습니다.\n");
	case 2:
		return printf("# 바닐라라떼 주문하셨습니다.\n");
	case 3:
		return printf("# 바닐라라떼 주문하셨습니다.\n");
	default:
		return printf("잘못 주문하셨습니다.\n");
	}
}