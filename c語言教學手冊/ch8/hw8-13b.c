#include <stdio.h> 
#include <stdlib.h>

int fac(int a);
double my_fun(int n);
int main(void)
{
	int i;
	for(i=2;i<=10;i++)
	{
		printf("my_fun(%d) = %lf\n", i, my_fun(i));
		if((my_fun(i) - my_fun(i-1)) < 0.00001)
		{
			printf("到%d的時候 my_fun(i) - my_fun(i-1)) < 0.00001", i);
			break;
		}
	}
	
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
