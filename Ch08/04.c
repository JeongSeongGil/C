#include <stdio.h>

int main04() {
	int aa[4] = { 100, 200, 300, 400 };
	int bb[] = { 100, 200, 300, 400 };
	int cc[4] = { 100, 200 };
	for (int i = 0; i < 4; i ++) {
		printf("aa[%d] => %d\t", i, aa[i]);
		printf("bb[%d] => %d\t", i, bb[i]);
		printf("cc[%d] => %d\n", i, cc[i]);
		
	}
}