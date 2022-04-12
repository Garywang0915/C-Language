#include <stdio.h>
#include <stdlib.h>

int fib_num(int);
void counter(void);
int count2;

int main(void)
{
	int n;
	
	for(n=1;n<=30;n++)
	{
		count2=0; //每次都要歸零，否則fib_num會把上一次的算進去並重複累積 
		fib_num(n);
		printf("n= %d, for迴圈 %d次, 遞迴 %d次\n", n, n, count2);
	}
	
	system("pause");
	return 0;
}

int fib_num(int n) //計算fib數列的值 
{
	int count=0;
	
	counter();

	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return (fib_num(n-1) + fib_num(n-2));
	}
	
}

void counter(void)
{
	count2++;
} 
