#include <stdio.h> 
#include <stdlib.h>

int fac(int a);
double power(double x, int n);
double my_fun(double x, int n);
int main(void)
{
	
	printf("my_fun(2.2, 3) = %lf\n", my_fun(2.2,3));
	printf("my_fun(2.2, 3) = %lf\n", my_fun(2.2,5));
	
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

double my_fun(double x, int n)
{
	double sum=0;
	int i;
	
	for(i=1;i<=n;i++)
	{
		sum+=((power(-1,i)*power(x,2*i+1))/(double)fac(2*i+1));
	}
	return sum;
}
