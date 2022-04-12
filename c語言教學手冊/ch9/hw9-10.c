#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j, sales[2][4];
	int sum[2]={0};	//兩個業務員的業績總和 

	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("業務員%d的第%d季業績為:", i+1, j+1);
			scanf("%d", &sales[i][j]);
			sum[i]+=sales[i][j];
		}
	}

	printf("\n");
	printf("2004年業務員1的業績總和為:%d\n", sum[0]);
	printf("2004年業務員2的業績總和為:%d\n", sum[1]);

	system("pause");
	return 0;
}

