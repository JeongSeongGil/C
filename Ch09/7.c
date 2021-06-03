#include <stdio.h>


int main07() {
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch; // ch의 주소값을 p에 복사
	q = p; // q값에 p(ch address)를 넣음
	*q = 'Z'; // *q = q주소의 값(q == p == ch) *q = ch
	printf("ch가 가지고 있는 값 : ch=> %c\n", ch);

}