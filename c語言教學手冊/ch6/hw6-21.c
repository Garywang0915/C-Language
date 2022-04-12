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
			printf("您輸入a\n");
			break;
		case 'b':
			printf("您輸入b\n");
			break;
		default:
			printf("您輸入的不是a或b\n");
			break;
	}
	
	system("pause");
	return 0;
}
