#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
	};
	struct data
	{
		char name[10];
		int math;
		struct date birthday;
	};
	struct data s1;
	
	printf("請輸入學生姓名:");
	gets(s1.name);
	do
	{
		printf("請輸入學生成績:");
		scanf("%d", &s1.math);
	}while(s1.math<0 || s1.math >100);
	do
	{
		printf("請輸入學生生日(月日要用逗號隔開ex 9,15):");
		scanf("%d, %d", &s1.birthday.month, &s1.birthday.day);
	}while(s1.birthday.month<0 || s1.birthday.month>12 || s1.birthday.day<0 || s1.birthday.day>31);
	//最後一個條件應該要卡個大小月... 
	
	printf("學生姓名: %s\n", s1.name);
	printf("學生成績: %d\n", s1.math);
	printf("學生生日: %d月%d日\n", s1.birthday.month, s1.birthday.day);

	system("pause");
	return 0;
}

