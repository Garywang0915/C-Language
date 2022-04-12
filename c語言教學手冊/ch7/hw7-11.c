#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	int sum=0;
	
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=(i-1);j++)
		{
			//printf("j = %d", j);
			if(i%j == 0)
				sum+=j;
		}
		
		if(i == sum)
		{
			printf("%d是完美數\n", i);
		}
		sum = 0;
	}
	
	system("pause");
	return 0;
}
