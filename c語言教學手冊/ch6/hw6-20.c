#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num=0;
	
	printf("請輸入1~4之間的數值: ");
	scanf("%d", &num);

	switch(num)
	{
		case 1:
			printf("%d:春天\n",num);
			break;
		case 2: 
			printf("%d:夏天\n",num);
			break;
		case 3: 
			printf("%d:秋天\n",num);
			break;
		case 4: 
			printf("%d:冬天\n",num);
			break;
		default:
			printf("輸入錯誤\n");
			break;
	}
	
	system("pause");
	return 0;
}
