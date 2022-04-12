#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j, sales[2][4];
	int sum[4]={0};	//兩個業務員的每一季的業績總和 

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("業務員%d的第%d季業績為:", i+1, j+1);
			scanf("%d", &sales[i][j]);
			sum[j]+=sales[i][j];
		}
	}
	printf("\n業務員每季的總和為");
	for(i=0;i<4;i++)
		printf("%d ", sum[i]);
	printf("\n");


	system("pause");
	return 0;
}

