#include <stdio.h>
#include <stdlib.h>

int rsum(int n);
int main(void)
{
	int i;
	
	for(i=1;i<=10;i++)
		printf("rsum(%d) = %d\n", i, rsum(i));

	system("pause");
	return 0;
}

int rsum(int n)
{
	if(n == 1)
	{
		return n*(n+1);
	}
	else
	{
		return rsum(n-1) + n*(n+1);
	}
}
