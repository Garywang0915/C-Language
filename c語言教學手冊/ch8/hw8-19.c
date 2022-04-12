#include <stdio.h> 
#include <stdlib.h>

double rpower(double b, int n);
int main(void)
{
	printf("rpower(2.0, 3) = %lf\n", rpower(2.0, 3));
	
	system("pause");
	return 0;
}

double rpower(double b, int n)
{
	
	if(n==1)
		return b;
	else
	{
		return rpower(b,n-1) * b;
	}
}


