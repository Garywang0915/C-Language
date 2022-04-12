#include <stdio.h>
#include <stdlib.h>
#define ROW (3)
#define COL (4)

double average(int arr[ROW][COL]);
int main(void)
{
	int arr[ROW][COL] = {{18, 17, 15, 13},
						 {23, 25, 20, 17},
						 {20, 21, 18, 15}};
	
	printf("arr的全部元素平均為:%4.2f\n", average(arr));

	system("pause");
	return 0;
}
double average(int arr[ROW][COL])
{
	int sum=0;
	int i,j;
	
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			sum+=arr[i][j];
	return (double)sum/(ROW*COL);
}

