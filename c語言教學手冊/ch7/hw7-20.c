#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	int times=1;
	
	do
	{
		do
		{
			printf("第%d次: 請輸入一個1~50範圍內整數: ",times);
			scanf("%d", &n);
		}
		while((n>50) || (n<1));
		
		for(i=1;i<n;i++)
		{
			printf("*");
		}
		printf("\n");
		times++;
	}
	while(times<=3); //小於三次 	
	
	system("pause");
	return 0;
}
