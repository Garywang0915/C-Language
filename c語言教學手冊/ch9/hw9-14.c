#include <stdio.h>
#include <stdlib.h>
#define ROW (3)
#define COL (4)

int main(void)
{
	float arr[ROW][COL] = {{18.2, 17.3, 15.0, 13.4},
						   {23.8, 25.1, 20.6, 17.8},
						   {20.6, 21.5, 18.4, 15.7}};
	int i, j;		
	float sum1[ROW], sum2[COL]; //�C�ѷū�, //�ɬq�ū� 
			
	printf("arr���e:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%4.1f  ", arr[i][j]);
			sum1[i] += arr[i][j]; //�p��U�ɬq���ū��`�M 
			sum2[j] += arr[i][j]; //�p��C�Ѫ��ū��`�M 
		}
		printf("\n");
	}
	
	printf("�C�ѥ����ū�: \n");
	for(j=0;j<COL;j++)
		printf("�P��%d��%4.1f ", j+1, sum2[j]/ROW);
	
	printf("\n�U�ɬq�����ū�: \n");
	for(i=0;i<ROW;i++)
		printf("�ɬq%d��%4.1f ", i+1, sum1[i]/COL);
	

	system("pause");
	return 0;
}

