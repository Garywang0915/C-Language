#include <stdio.h> 
#include <stdlib.h>

int prime(int n);
int main(void)
{
	int n = 100;
	
	printf("��%d�ӽ�Ƭ�%d\n", n, prime(n));
	
	system("pause");
	return 0;
}

int prime(int n)
{
	int num=2; //�q2�}�l
	int i;
	int sum=0;
	int count=0;
	
	while(count != n) //�������n�ӽ�� 
	{
		for(i=1;i<=num;i++)
		{
			if(num%i==0)
				sum+=i;
		}
		if(sum == num+1)
		{
			count+=1;
		}
		num++;
		sum=0;
	} 
	
	return (num-1);
}
