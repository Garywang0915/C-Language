#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

double my_fun(int n);
int main(void)
{
	int i;
	
	for(i=3;i<7;i++)
	{
		printf("my_fun(%d) = %lf\n", i, my_fun(i));
	}
	
	system("pause");
	return 0;
}

double my_fun(int n)
{
	double ans=0;
	int i;
	
	for(i=1;i<=n;i++)
	{
		ans+=(1/pow(2,i));
	}
	
	return ans;
}
