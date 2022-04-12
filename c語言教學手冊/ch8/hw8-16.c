#include <stdio.h> 
#include <stdlib.h>

int find_k(int n);
int main(void)
{
	int i;
	
	for(i=1;i<=25;i++)
	{
		printf("find_k(%d) = %d\n", i, find_k(i));
	}
	
	system("pause");
	return 0;
}

int find_k(int n)
{
	int k=0;
	int temp;
	
	k = (n-2)/4; //¨ú4ªº¾l¼Æ
	if(4*k+2<n)
	{
		temp = n - (4*k+2);
		if((4*(k+1)+2 - n) < temp)
			k++;
	}

	return k;
}
