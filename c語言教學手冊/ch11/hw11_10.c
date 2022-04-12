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
	} student[MAX];

	for(i=0;i<MAX;i++)
	{
		do
		{
			printf("請輸入學生姓名: ");
			scanf(" %s", &student[i].name);
			printf("請輸入數學成績0~100: ");
			scanf(" %d", &student[i].math);

		}while(student[i].math < 0 || student[i].math > 100);	
	}

	
	/* 印出全部學生的數學成績 */
	for(i=0;i<MAX;i++)
		printf("%s的數學成績: %d\n", student[i].name, student[i].math);
		
	/* (a) */
	max = student[0].math;
	max_index = 0;
	for(i=0;i<MAX;i++)
	{
		if(max < student[i].math)
		{
			max = student[i].math;
			max_index = i;
		}
	}
	printf("成績最高分的是 %s, 分數: %d\n", student[max_index].name, student[max_index].math);
	
	/* (b) */
	for(i=0;i<MAX;i++)
	{
		if(student[i].math < 60)
		{
			printf("%s的數學成績不及格: %d\n", student[i].name, student[i].math);
		}
	}
	
	/* (c) */
	for(i=0;i<MAX;i++)
		sum+=student[i].math;
	
	printf("平均的成績為: %4.2lf\n", (double)(sum/MAX));	

	system("pause");
	return 0;
}

