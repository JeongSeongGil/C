#include <stdio.h>

int main()
{
	printf("10진수를 2진수로 변환하기\n\n\n");
	
	int decimal, i;
	
	printf("10진수를 입력..  ");scanf("%d", &decimal); 
	
	int binary[20] = {0,};
	
	int position = 0;
	
	while(1)
	{
		binary[position] = decimal % 2;
		decimal = decimal / 2;
		position ++;
		
		if (decimal == 0)
		break;
	}
	printf("2진수로 변환 : "); 
	for (i=position - 1;i>=0; i--)
	{
		printf("%d", binary[i]);
	}
	
	printf("\n");
	
	return 0;
}
