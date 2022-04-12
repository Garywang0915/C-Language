#include <stdio.h>
#include <stdlib.h>
#define MAX (5)

struct data
{
	char name[10];
	int math;
};

int databest(struct data arr[]);
void failed(struct data arr[]);
double average(struct data arr[]);
void sort(struct data arr[]);
int main(void)
{
	int i;
	struct data student[MAX] = {{"Mary", 55}, {"Jesy", 80}, {"Kevin", 67}, {"Tim", 94}, {"Peter", 34}};
	
	printf("�����̰���: %d\n", databest(student));
	failed(student);
	
	printf("\n��������: %4.2lf\n", average(student));
	
	printf("\n�Ƨǫe\n");
	for(i=0;i<MAX;i++)
		printf("%s���ƾǦ��Z: %d\n", student[i].name, student[i].math);
	sort(student);
	printf("\n�Ƨǫ�\n");
	for(i=0;i<MAX;i++)
		printf("%s���ƾǦ��Z: %d\n", student[i].name, student[i].math);
	
	system("pause");
	return 0;
}
int databest(struct data arr[])
{
	int i,max;
	max = arr[0].math;
	for(i=0;i<MAX;i++) 
		if(max < arr[i].math)
			max = arr[i].math;
	return max;
}
void failed(struct data arr[])
{
	int i;
	for(i=0;i<MAX;i++)
		if(arr[i].math < 60)
			printf("%s���ƾǦ��Z���ή�: %d\n", arr[i].name, arr[i].math);

}
double average(struct data arr[])
{
	int i, sum=0;
	for(i=0;i<MAX;i++)
		sum+=arr[i].math;
	
	return (double)(sum/MAX);
}
void sort(struct data arr[])
{
	int i, j;
	struct data student_temp;
	for(i = MAX-2;i >= 0; i--)	//����`�ƶq 
	{
		for(j=0;j<=i;j++)
		{
			if(arr[j].math < arr[j+1].math)
			{
				student_temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = student_temp; 
			}
		}
	}
}
