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
	};
	struct data  student[MAX] = {{"Mary", 55}, {"Jesy", 80}, {"Kevin", 67}, {"Tim", 94}, {"Peter", 34}};

	/* �L�X�����ǥͪ��ƾǦ��Z */
	for(i=0;i<MAX;i++)
		printf("%s���ƾǦ��Z: %d\n", student[i].name, student[i].math);
		
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
	printf("���Z�̰������O %s, ����: %d\n", student[max_index].name, student[max_index].math);
	/* (b) */
	for(i=0;i<MAX;i++)
	{
		if(student[i].math < 60)
		{
			printf("%s���ƾǦ��Z���ή�: %d\n", student[i].name, student[i].math);
		}
	}
	/* (c) */
	for(i=0;i<MAX;i++)
		sum+=student[i].math;
	
	printf("���������Z��: %4.2lf\n", (double)(sum/MAX));

	system("pause");
	return 0;
}

