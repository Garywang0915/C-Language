#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;

	for(cnt=1;cnt<=3;cnt++)
	{
		printf("請輸入密碼: ");
		scanf("%d", &input);
		
		if(input==passwd)
		{
			printf("密碼輸入正確，歡迎使用本系統!!\n");
			break;
		}
		else	//輸入錯誤 
		{
			if(cnt==3)	//第三次 
			{
				printf("密碼輸入超過三次!!\n");
			}
			continue; //回到最開頭
		}
	}
	
	system("pause");
	return 0;
}
