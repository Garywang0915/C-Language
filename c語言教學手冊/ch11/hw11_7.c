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
	struct data s1 = {"Gary Wang", 10, {9, 15}};	
	
	printf("學生姓名: %s\n", s1.name);
	printf("學生成績: %d\n", s1.math);
	printf("學生生日: %d月%d日\n", s1.birthday.month, s1.birthday.day);
	printf("Size of s1: %d\n", sizeof(s1));


	system("pause");
	return 0;
}

