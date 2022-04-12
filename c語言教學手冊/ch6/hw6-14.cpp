#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int year=0;
	
	do
	{
		printf("請輸入西洋年份: ");
		scanf("%d", &year);
	}
	while(year < 1000); //四位數 

	if(year % 4000 == 0) //每4000年
		printf("非閏年\n");
	else if(year % 400 == 0)
		printf("閏年\n");
	else if(year % 100 == 0)
		printf("非閏年\n");
	else if(year % 4 == 0)
		printf("閏年\n");
	else
		printf("非閏年\n");
	

	system("pause");
	return 0;
}
