#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5, num6;
    printf("5자리 정수를 입력하세요 :\n");
    scanf("%d", &num1);
    
    num2= num1 % 10;
    num1/=10;
    num3= num1 % 10;
    num1/=10;
    num4= num1 %10;
    num1/=10;
    num5= num1 %10;
    num1/=10;
    num6= num1 %10;
    
    printf("%d %d %d %d %d\n", num2, num3, num4, num5, num6 );
    return 0;
}
