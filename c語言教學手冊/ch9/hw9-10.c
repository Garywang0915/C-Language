#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j, sales[2][4];
	int sum[2]={0};	//��ӷ~�ȭ����~�Z�`�M 

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("�~�ȭ�%d����%d�u�~�Z��:", i+1, j+1);
			scanf("%d", &sales[i][j]);
			sum[i]+=sales[i][j];
		}
	}

	printf("\n");
	printf("2004�~�~�ȭ�1���~�Z�`�M��:%d\n", sum[0]);
	printf("2004�~�~�ȭ�2���~�Z�`�M��:%d\n", sum[1]);

	system("pause");
	return 0;
}

