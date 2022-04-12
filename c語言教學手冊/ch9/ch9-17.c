#include <stdio.h> 
#include <stdlib.h>
#define SIZE 5

void show(int a[]), bubble(int a[]);
int main(void)
{
	int data[SIZE] = {26, 5, 81, 7, 63};
	
	printf("排序前");
	show(data);
	bubble(data);
	printf("排序後");
	show(data);
	bubble(data);
	
	system("pause");
	return 0;
}

void show(int a[])
{
	int i;
	for(i=0;i<SIZE;i++)
		printf("%d ", a[i]);
	printf("\n");
}

void bubble(int a[])
{
	int i, j, temp;
	for(i=1;i<SIZE;i++)
	{
		for(j=1;j<(SIZE-1);j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
