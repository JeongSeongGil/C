#include <stdio.h>

int main()
{
	int num1=2, num2=7,num3=4;
	
	num1 *=3;
	num2/=2;
	num3= num3++ + ++num3;
	printf("%d, %d, %d\n", num1, num2, num3);
	
	return 0;
}
