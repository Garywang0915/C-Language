#include <stdio.h> 
#include <stdlib.h>

int fac(int a);
double power(double x, int n);
double my_fun(double x, int n);
int main(void)
{
	int i;
	double temp;
	
	for(i=1;i<=20;i++)
	{
		printf("my_fun(2.2, %d) = %lf\n",i, my_fun(2.2,i));
		if(i>=2)
		{
			temp = my_fun(2.2, i) - my_fun(2.2, (i-1));
			if(temp>0 & temp<0.0001)
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
