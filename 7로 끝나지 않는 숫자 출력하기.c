#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int i;
	printf("두 정수를 작은 수 부터 입력하시오..  ");
    scanf("%d %d", &num1, &num2);
    
    i = num1;

    while (1)
    {
		if (i % 10 ==7)
		{
			i++;
			continue;
		}
		
		if (i > num2)
		{
			break;
		}

        printf("%d\n ", i);
        i++;
    }

    return 0;
}
