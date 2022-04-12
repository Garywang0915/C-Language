#include <stdio.h>
#include <stdlib.h>
#define MAX (5)

int main(void)
{
	int i, max, max_index, sum;
	struct data
	{
		char name[10];
		int math;
	} student[MAX] = {{"Mary", 55}, {"Jesy", 80}, {"Kevin", 67}, {"Tim", 94}, {"Peter", 34}}, *ptr;

	ptr = student;	//跟陣列概念一樣, 結構變數名稱可以直接當成指標常數 

	/* 印出全部學生的數學成績 */
	for(i=0;i<MAX;i++)
		printf("%s的數學成績: %d\n", (ptr+i)->name, (ptr+i)->math);
		
	/* (a) */
	max = ptr->math;
	max_index = 0;
	for(i=0;i<MAX;i++)
	{
		if(max < (ptr+i)->math)
		{
			max = (ptr+i)->math;
			max_index = i;
		}
	}
	printf("成績最高分的是 %s, 分數: %d\n", (ptr+max_index)->name, (ptr+max_index)->math);
	/* (b) */
	for(i=0;i<MAX;i++)
	{
		if((ptr+i)->math < 60)
		{
			printf("%s的數學成績不及格: %d\n", (ptr+i)->name, (ptr+i)->math);
		}
	}
	/* (c) */
	for(i=0;i<MAX;i++)
		sum+=(ptr+i)->math;
	
	printf("平均的成績為: %4.2lf\n", (double)(sum/MAX));

	system("pause");
	return 0;
}

