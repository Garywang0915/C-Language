#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	
	int input;
	int i,j;
	int sum;
	int prime=1; //�����O�_����� 
	
	do
	{
		printf("�п�J�@�ӥ����(�j��1) = ");
		scanf("%d", &input);
	}
	while(input<=1);
	
	i = input-1;
	
	while(i>0)	
	{
		for(j=1,sum=0;j<=i;j++)
		{
			if(i%j == 0) //�D��� 
			{
				sum+=j;
			}				
		}
		
		if(sum == i+1)	//��ܥu��1�M�����i�㰣 
		{
			printf("�p��%d���̤j��Ƭ�:%d\n", input, i);
			break;
		}

		i--;
	}
	
	system("pause");
	return 0;
}
