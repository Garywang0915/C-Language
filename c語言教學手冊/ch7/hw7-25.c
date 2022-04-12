#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	int times = 5;
	
	for(i=1;i<=times;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
