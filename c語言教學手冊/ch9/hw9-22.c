#include <stdio.h>
#include <stdlib.h>
#define ROW (3)
#define COL (4)

void add(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL]);
int main(void)
{
	int A[ROW][COL] = {{18, 17, 15, 13},
					   {23, 25, 20, 17},
					   {20, 21, 18, 15}};
	int B[ROW][COL] = {{9, 24, 4, 6},
					   {11, 22, 8, 14},
					   {33, 5, 24, 1}};
	int C[ROW][COL] = {0};			   
	int i,j;
	
	
	add(A, B, C);
	printf("Array C:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%2d  ", C[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}
void add(int A[ROW][COL], int B[ROW][COL], int C[ROW][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			C[i][j] = A[i][j] + B[i][j];
	}
}

