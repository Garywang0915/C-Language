#include <stdio.h> 
#include <stdlib.h>

int fac(int a);
double power(double x, int n);
double my_fun(double x, int n);
int main(void)
{
	printf("my_fun(0.1,5) = %lf\n", my_fun(0.1, 5));
	printf("my_fun(0.1,8) = %lf\n", my_fun(0.1, 8));
	printf("my_fun(0.2,8) = %lf\n", my_fun(0.2, 8));
	
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

double my_fun(double x, int n)	//©³¼Æ, ¦¸¤è 
{
	int i;
	double sum=0;

	for(i=1;i<=n;i++)
	{
		sum+=(power(x, i)/(double)fac(i));
	}
	return sum;
}
