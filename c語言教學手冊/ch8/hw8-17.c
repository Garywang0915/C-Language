#include <stdio.h> 
#include <stdlib.h>

int find_k(int n);
double Euler(int n);
int find_prime(int n);
int main(void)
{
	
	//printf("Euler(100) = %lf\n", Euler(100));
	printf("Euler(1000) = %lf\n", Euler(1000));
	//printf("Euler(10000) = %lf\n", Euler(10000));
	
	system("pause");
	return 0;
}

int find_k(int n)
{
	int k=0;
	int temp;
	
	k = (n-2)/4; //取4的餘數
	if(4*k+2<n)
	{
		temp = n - (4*k+2);
		if((4*(k+1)+2 - n) < temp)
			k++;
	}

	return k;
}

int find_prime(int n) // 找出第n個質數 
{
	int count=0;
	int sum=0;
	int num=2;
	int i;
	
	while(count<n)
	{
		for(i=1;i<=num;i++)
		{
			if(num%i == 0)
				sum+=i;
		}
		if(sum==1+num)
			count++;

		num++;
		sum=0;
	}
	
	return (num-1);
}

double Euler(int n)
{
	int i,temp;
	double pi=1;
	
	for(i=1;i<=n;i++)
	{
		temp = 4*find_k(find_prime(i+1))+2;
		//printf("%d\n", find_prime(i+1));
		//printf("%d\n", temp);
		pi*=((find_prime(i+1))/(double)temp);
	}
	
	return pi*2;
}

