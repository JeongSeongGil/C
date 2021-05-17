#include <stdio.h>


int main15() {
	int aa[3][4];
	int val = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			aa[i][j] = val;
			val += 1;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("aa[%d][%d] = %d\n", i, j, aa[i][j]);
		}
	}

}
