#include <stdio.h> 
#include <stdlib.h>

double square(double x);

int main(void)
{
	double x=4.215;
	
	printf("%lf的2次方為%lf\n", x, square(x));
	
	system("pause");
	return 0;
}

double square(double x)
{
	double ans;
	ans = x*x;
	return ans;
}

/*
4.215000的2次方為17.766225
*/
