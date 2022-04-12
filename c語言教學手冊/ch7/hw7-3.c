#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int total=0;
	
	do
	{
		printf("請輸入數字n ");
		scanf("%d", &n);
	}
	while(n % 2 == 0); //偶數 
	
	for(i=1;i<=n;i=i+2)
	{
		total+=i;
	}
	
	printf("從1+3+...+%d 總和為 %d \n", n, total);
	
	system("pause");
	return 0;
}
