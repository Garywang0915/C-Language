#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j, sales[2][4];
	int sum[4]={0};	//��ӷ~�ȭ����C�@�u���~�Z�`�M 

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("�~�ȭ�%d����%d�u�~�Z��:", i+1, j+1);
			scanf("%d", &sales[i][j]);
			sum[j]+=sales[i][j];
		}
	}
	printf("\n�~�ȭ��C�u���`�M��");
	for(i=0;i<4;i++)
		printf("%d ", sum[i]);
	printf("\n");


	system("pause");
	return 0;
}

