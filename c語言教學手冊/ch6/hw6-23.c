#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int day;
	
	printf("請輸入1~7的整數 ");
	scanf("%d", &day);	

	switch(day)
	{
		case 1:
			printf("今天要上班\n");
			break;
		case 2:
			printf("今天要上班\n");
			break;
		case 3:
			printf("今天要上班\n");
			break;
		case 4:
			printf("今天要上班\n");
			break;
		case 5:
			printf("今天要上班\n");
			break;
		case 6:
			printf("今天休息\n");
			break;
		case 7:
			printf("今天休息\n");
			break;
		default:
			printf("輸入錯誤\n");
			break;
			
	}
	
	system("pause");
	return 0;
}
