#include <stdio.h> 
#include <stdlib.h>

int fac(int a);
double power(double x, int n);
double my_fun(double x, int n);
int main(void)
{
	int n=2;
	
	while(n>0)
	{
		printf("my_fun(0.1, %d) = %lf\n", n, my_fun(0.1, n));
		//printf("my_fun(0.1, %d) = %lf\n", n, my_fun(0.1, n));
		if((my_fun(0.1, n) - my_fun(0.1, (n-1))) < 0.00001)
			break;
		n++;
	}
	
	printf("從%d開始 my_fun(0.1, %d) - my_fun(0.1, %d) < 0.00001", n, n, n-1);
	
	system("pause");
	return 0;
}

int fac(int a)
{
	int i, total=1;
	for(i=1;i<=a;i++)
		total*=i;
	return total;
}

double power(double x, int n)
{
	int i;
	double total=1.0;
	for(i=1;i<=n;i++)
	{
		total*=x;
	}
	return total;
}

double my_fun(double x, int n)	//底數, 次方 
{
	int i;
	double sum=0;

	for(i=1;i<=n;i++)
	{
		sum+=(power(x, i)/(double)fac(i));
	}
	return sum;
}
