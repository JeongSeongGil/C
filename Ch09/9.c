#include <stdio.h>

int main09() {
	char s[8] = "Basic-C";
	char* p;
	int i;
	p = s;
	for (i = sizeof(s); i >= 0; i--) {
		printf("%c", s[i]);

	}
}