#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char i;
	
	printf("請輸入字元 ");
	scanf(" %c", &i);	

	switch(i)
	{
		case 'a':
		case 'A':
			printf("您輸入的是A\n");
			break;
		case 'b':
		case 'B':
			printf("您輸入的是B\n");
			break;
		default:
			printf("您輸入的不是A或B\n");
			break;
	}
	
	system("pause");
	return 0;
}
