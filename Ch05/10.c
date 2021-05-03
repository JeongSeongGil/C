#include <stdio.h>

int main10() {

	int value;
	printf("Ãâ»ı³âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä :");

	scanf("%d", &value);
	select(value % 12);
}


int select3(int value)
{
	switch (value) {
	case 0:
		return printf("¿ø¼şÀÌ¶ì\n");

	case 1:
		return printf("´ß¶ì\n");

	case 2:
		return printf("°³¶ì\n");

	case 3:
		return printf("µÅÁö¶ì\n");

	case 4:
		return printf("Áã¶ì\n");

	case 5:
		return printf("¼Ò¶ì\n");

	case 6:
		return printf("È£¶ûÀÌ¶ì\n");

	case 7:
		return printf("Åä³¢¶ì\n");

	case 8:
		return printf("¿ë¶ì\n");

	case 9:
		return printf("¹ì¶ì\n");

	case 10:
		return printf("¸»¶ì\n");

	case 11:
		return printf("¾ç¶ì\n");
	}

}