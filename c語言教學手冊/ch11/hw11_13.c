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

	ptr = student;	//��}�C�����@��, ���c�ܼƦW�٥i�H���������б`�� 

	/* �L�X�����ǥͪ��ƾǦ��Z */
	for(i=0;i<MAX;i++)
		printf("%s���ƾǦ��Z: %d\n", (ptr+i)->name, (ptr+i)->math);
		
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
	printf("���Z�̰������O %s, ����: %d\n", (ptr+max_index)->name, (ptr+max_index)->math);
	/* (b) */
	for(i=0;i<MAX;i++)
	{
		if((ptr+i)->math < 60)
		{
			printf("%s���ƾǦ��Z���ή�: %d\n", (ptr+i)->name, (ptr+i)->math);
		}
	}
	/* (c) */
	for(i=0;i<MAX;i++)
		sum+=(ptr+i)->math;
	
	printf("���������Z��: %4.2lf\n", (double)(sum/MAX));

	system("pause");
	return 0;
}

