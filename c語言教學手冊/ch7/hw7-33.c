#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	
	int input;
	int i,j;
	int sum;
	int prime=1; //紀錄是否為質數 
	
	do
	{
		printf("請輸入一個正整數(大於1) = ");
		scanf("%d", &input);
	}
	while(input<=1);
	
	i = input-1;
	
	while(i>0)	
	{
		for(j=1,sum=0;j<=i;j++)
		{
			if(i%j == 0) //非質數 
			{
				sum+=j;
			}				
		}
		
		if(sum == i+1)	//表示只有1和本身可整除 
		{
			printf("小於%d的最大質數為:%d\n", input, i);
			break;
		}

		i--;
	}
	
	system("pause");
	return 0;
}
