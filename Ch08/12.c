#include <stdio.h>
#include <string.h>


int main12() {
	char ss[] = "XYZ";
	char tt[] = "xyz";
	int r;
	r = strcmp(ss, tt);
	printf("%d", r);
}