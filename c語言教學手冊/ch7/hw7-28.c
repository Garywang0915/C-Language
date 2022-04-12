#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	
	for(j=1;j<=9;j++)	//¦C 
	{
		for(i=1;i<=9;i++)	//¦æ 
		{
			printf("%d x %d = %2d  ", j, i, j*i);
		}
		printf("\n");
	}
		
	system("pause");
	return 0;
}
