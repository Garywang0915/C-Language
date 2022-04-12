#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

//int Mersenne_Prime(int n);
int is_prime(int num);
int main(void)
{
	int count=0;
	int temp;
	int p=1;
	
	while(count<8) 
	{
		temp = pow(2, p)-1;
		if(is_prime(temp) == 1)
		{
			printf("%d 是第%d個梅森尼質數\n", temp, count+1);
			count++;
		}
		p++;
	}
	
	system("pause");
	return 0;
}

/*
int Mersenne_Prime(int n)
{
	int p=1;
	
	while(pow(2,p) < n)
	{
		temp = pow(2,p)-1;
		if(temp == p)
		{
			return 1; //表示為Mersenne primes 
		}
		p++;
	}
	return 0;
}
*/
int is_prime(int num)
{
	int i;
	
	if(num == 1)
		return 0;
	else
	{
		for(i=2;i<=num-1;i++)
			if(num%i==0)
				return 0;
	}
	return 1;
}
