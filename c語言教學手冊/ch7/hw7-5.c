#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,sum=0;
	
	for(i=1;i<=100;i++)
	{
		if ((i%3==0) & (i%8==0))
			sum += i;
	}
	printf("1~100中可同時被3和8整除的整數總和為: %d\n", sum);
	
	system("pause");
	return 0;
}
