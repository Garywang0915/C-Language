#include <stdio.h>
#include <stdlib.h>
#define ROW (4)
#define COL (3)

void search(int arr[][COL], int *ptr2);
int main(void)
{
	int a[ROW][COL] = {{26, 5, 7},
					   {10, 3,47},
					   { 6,76, 8},
					   {40, 4,32}};
	int i,j, b[2];
	
	printf("Matrix of a:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%02d ", a[i][j]);
		printf("\n");
	}
	
	search(a,b);
	
	printf("陣列的最大值=%02d\n", b[0]);
	printf("陣列的最小值=%02d\n", b[1]);

	system("pause");
	return 0;
}

void search(int arr[][COL], int *ptr2)
{
	int i,j;
	int min, max;
	min = max = **arr;
	
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			if(*(*(arr+i)+j)>max)
				max = *(*(arr+i)+j);
			if(*(*(arr+i)+j)<min)
				min = *(*(arr+i)+j);
		}
	}
	*ptr2 = max; //Max
	*(ptr2+1) = min; //Min 
}

