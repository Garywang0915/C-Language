#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=0;
	int sum=0;
	
	do
	{
		n+=1;
		sum+=n;
	}
	while(sum<1000);
	
	printf("1+2+3+...+%d���`�M�W�L%d\n", n, sum);
	
	system("pause");
	return 0;
}
