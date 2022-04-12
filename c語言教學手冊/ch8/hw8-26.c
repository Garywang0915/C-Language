#include <stdio.h> 
#include <stdlib.h>

double rpower(double b, int n);
void counter(void);
int main(void)
{
	printf("rpower(2.0, 9) = %lf\n", rpower(2.0, 9));
	
	system("pause");
	return 0;
}

double rpower(double b, int n)
{
	counter();
		
	if(n==1)
		return b;
	else
	{
		return rpower(b,n-1) * b;
	}
}

void counter(void)
{
	static int count = 1;
	
	printf("counter已經被呼叫%d次了\n", count);
	count++;
} 
