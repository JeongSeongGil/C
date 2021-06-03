#include <stdio.h>
#include <string.h>


int main04() {

	int aa[3] = { 10, 20, 30 };
	printf("aa[0]의 value : %d , address :%d\n", aa[0], &aa[0]);
	printf("aa[1]의 value : %d , address :%d\n", aa[1], &aa[1]);
	printf("aa[2]의 value : %d , address :%d\n", aa[2], &aa[2]);
	printf("aa : %d\n", aa); // 배열의 시작 주소 값을 가지고 있음 / aa == a[0]
	printf("aa+1 : %d\n", aa + 1); // aa + 1 == a[1]

}