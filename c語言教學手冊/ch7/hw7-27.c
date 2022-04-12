#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	int times = 5;
	
	for(i=1;i<=times;i++)	//Layer 
	{
		for(j=1;j<=(times-i);j++)	//Space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)	//Number
		{
			printf("%d", j);
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
