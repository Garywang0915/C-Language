#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=0;
	int sum=0;
	
	while(sum<1000)
	{
		n++;
		sum+=n;
	}
	
	printf("1+2+3+...+%d���`�M�W�L1000\n", n);
	
	system("pause");
	return 0;
}
