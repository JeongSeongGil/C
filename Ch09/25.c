#include <stdio.h>


int main25() {
	int a, b, tmp;
	int* p1, * p2;
	printf("값 입력 : ");
	scanf("%d", &a);
	printf("값 입력 : ");
	scanf("%d", &b);
	p1 = &a; // a의 주소
	p2 = &b; // b의 주소
	tmp =  *p1; //a의 값
	a = *p2; // b의 값
	*p2 = tmp; //tmp / a의 값을 *p2 (b의 값위치)에 저장
	printf("a : %d  b : %d", a, b);

}