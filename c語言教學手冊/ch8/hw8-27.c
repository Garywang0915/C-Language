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
		count2=0; //�C�����n�k�s�A�_�hfib_num�|��W�@������i�h�í��Ʋֿn 
		fib_num(n);
		printf("n= %d, for�j�� %d��, ���j %d��\n", n, n, count2);
	}
	
	system("pause");
	return 0;
}

int fib_num(int n) //�p��fib�ƦC���� 
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
