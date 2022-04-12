#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int sum=0;
	
	for(n=0;n<100;n++)
	{
		sum+=n;
		if(sum>=1000)
			break;
	}
	
	printf("1+2+3+...+%d的總和超過1000\n", n);
	
	system("pause");
	return 0;
}
