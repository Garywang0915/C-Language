#include <stdio.h>
#include <stdlib.h>
#define ROW (3)
#define COL (5)

int main(void)
{
	int arr[ROW][COL] = {{33,32,56,45,33},
						 {77,33,68,45,23},
						 {43,55,43,67,65}};
	int i, j;
	int sum1[ROW] = {0}; // �C�@��P������P���`���B 
	int sum2[COL] = {0}; //�C�@�����~���P���`���B		
			 
	printf("arr���e:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%3d", arr[i][j]);
			sum1[i] += arr[i][j];
			sum2[j] += arr[i][j];
		}

		printf("\n");
	}

	for(i=0;i<ROW;i++)
		printf("��%d��P����`�M��%d\n", i+1, sum1[i]);
	for(j=0;j<COL;j++)
		printf("��%d�����~�P���`�M��%d\n", j+1, sum2[j]);


	system("pause");
	return 0;
}

