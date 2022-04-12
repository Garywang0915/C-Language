#include <stdio.h> 
#include <stdlib.h>

int fac(int a);
double my_fun(int n);
int main(void)
{
	printf("my_fun(5) = %lf\n", my_fun(5));
	printf("my_fun(8) = %lf\n", my_fun(8));
	printf("my_fun(10) = %lf\n", my_fun(10));
	
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

double my_fun(int n)
{
	int i;
	double sum=0;
	for(i=1;i<=n;i++)
		sum+=(1/(double)fac(i));
	return sum;
}
