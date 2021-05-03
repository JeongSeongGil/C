#include <stdio.h>
int select2(int value) {
	switch (value)
	{
	case 1:
		return printf("1을 선택했다.\n");
		break;
	case 2:
		return printf("1을 선택했다.\n");
		break;
	case 3:
		return printf("1을 선택했다.\n");
		break;
	case 4:
		return printf("1을 선택했다.\n");
		break;
	default:
		return printf("이상한걸 선택했다. / %d \n", value);
		break;
	}
}
int main09() {
	int value;
	printf("1 ~ 4 중에 선택하세요 : ");
	scanf("%d", &value);

	select2(value);

}