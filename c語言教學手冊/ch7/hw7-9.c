#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,sum=1;
	
	for(i=2;i<=50;i++)
	{
		if(i%2==0) //���� 
		{
			sum -= (i*i);
		}
		else
		{
			sum += (i*i);
		}
	}
	
	printf("�`�M��: %d \n", sum);
	
	
	system("pause");
	return 0;
}
