#include <stdio.h>
#include <string.h>


int main13() {
	char ss[20] ;
	char tt[20];
	char zz[20];
	int r1, r2;
	puts("첫번째 문자열을 입력하세요.");
	gets(ss);
	puts("(put) & (gets)두번째 문자열을 입력하세요."); 
	gets(tt); // scanf gets의 차이는 space 입력 (gets = yes)
	printf("(printf) & (scanf)세번째 문자열을 입력하세요."); // printf puts 차이는 puts는 자동 \n
	scanf("%s", &zz);
	r2 = strlen(tt);
	r1 = strlen(ss);
	printf("%d / %s\n", r1, ss);
	printf("%d / %s\n", r2, tt);
	printf("%d / %s\n", strlen(zz), zz);

	if (strcmp(ss, tt)) {
		printf("두 문자열의 내용이 다릅니다.");
	}
	else {

		printf("두 문자열의 내용이 같습니다.");
	}
}