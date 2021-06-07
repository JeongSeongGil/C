#include <stdio.h>

int start(int coffee) {
	printf("1. 뜨거운 물을 준비\n");
	printf("2. 종이컵 준비\n");
	return end(coffee);

}
int end(int coffee) {
	switch (coffee)
	{
	case 1:
		printf("3. 보통 커피를 탄다\n");
		break;
	case 2:
		printf("3. 설탕 커피를 탄다\n");
		break;
	case 3:
		printf("3. 블랙 커피를 탄다\n");
		break;
	default:
		printf("3. 아무거나 탄다\n");
		break;
	}
	printf("4. 물을 붓는다\n");
	printf("5. 스푼으로 저어서 녹인다\n");
	return 0;
}
int main02() {
	int coffee;
	printf("어떤 커피 드릴까요 (1:보통, 2:설탕, 3:블랙)");
	scanf("%d", &coffee);
	start(coffee);
	printf("~~님 커피 나왔습니다.");

}