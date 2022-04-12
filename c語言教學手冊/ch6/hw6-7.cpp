#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("請輸入三角形的三邊長: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a+b)<=c)
	{
		printf("無法組成三角形\n");
	}
	else if(a+c<=b)
	{
		printf("無法組成三角形\n");
	}
	else if(b+c<=a)
	{
		printf("無法組成三角形\n");
	}
	else
	{
		printf("可以組成三角形\n");
	}
	
	system("pause");
	return 0;
	
}
