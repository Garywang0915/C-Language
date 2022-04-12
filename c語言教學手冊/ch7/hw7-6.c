#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	
	do
	{
		printf("請輸入正整數(n>0): ");
		scanf("%d",&n);
	}
	while(n<=0);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0) //可以被整除 
		{
			printf("%d是%d的因數\n", i,n);
		}
	}
	
	system("pause");
	return 0;
}
