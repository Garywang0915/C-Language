#include <stdio.h>
#include <stdlib.h>

int sum2(int n);
int main(void)
{
	int i;
	
	for(i=1;i<=10;i++)
		printf("sum2(%d) = %d\n", i, sum2(i));
	


	system("pause");
	return 0;
}

int sum2(int n)
{
	if(n == 1)
	{
		return 2;		
	}
	else
	{
		return sum2(n-1) + 2*n;
	} 
}
