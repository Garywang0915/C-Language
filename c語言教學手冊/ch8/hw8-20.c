#include <stdio.h>
#include <stdlib.h>

int sum(int n);
int main(void)
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("sum(%d) = %d\n", i, sum(i));
	}

	system("pause");
	return 0;
}

int sum(int n)
{	
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return sum(n-1) + n;
	}
}
