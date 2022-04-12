#include <stdio.h>
#include <stdlib.h>

int fun(int n);
int main(void)
{

	printf("f(5) = %d\n", fun(5));
	
	system("pause");
	return 0;
}

int fun(int n)
{
	if(n==0)
	{
		return 3;
	}
	else
	{
		return 2*fun(n-1) - 5;
	}
}
