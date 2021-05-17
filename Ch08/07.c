#include <stdio.h>


int main07() {
	char aa[10] = "SeongGil";
	aa[8] = '2';
	for (int i = 0; i < sizeof(aa) / sizeof(char); i++) {
		printf("%c\n", aa[i]);
	}
	printf("%s", aa);


}