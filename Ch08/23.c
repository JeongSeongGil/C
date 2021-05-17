#include <stdio.h>
#include <string.h>


int main() {
	char str[100];
	char ch1, ch2;
	
	printf("여러 글자를 입력 : ");
	gets(str);

	printf("old & new ==>");
	scanf("%c  %c", &ch1, &ch2);


	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ch1)
			str[i]  = ch2;
	}

	printf("result == > %s\n", str);
}