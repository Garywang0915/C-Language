#include <stdio.h> 
#include <stdlib.h>

int fib(int n);
int main(void)
{
	int n;
	for(n=1;n<=10;n++)
		printf("fib(%d)=%d\n",n,fib(n));
	
	system("pause");
	return 0;
}

int fib(int n)
{
	int i;
	int a1=1,a2=1;
	int ans=0;
	
	if(n==1 || n==2)
		return 1;
			
	for(i=1;i<=n;i++)
	{
		if(i==1 || i==2)
			ans=1;
		else //¤j©ó3 
		{
			ans = a1+a2;
			a1 = a2;
			a2 = ans;
		}
	}
	return ans;
}
