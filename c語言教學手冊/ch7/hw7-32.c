#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i=2;
	int input;
	int prime=1;
	
	do
	{
		printf("�п�J�@�ӥ����: ");
		scanf("%d", &input);
	}
	while(input<=1);
	
	while(i<(input-1))	//�������W�[��input-1 
	{
		if(input%i==0) //�Q�㰣
		{
			printf("%d���O���\n", input);
			prime = 0;
			break;
		}	
		i++;
	}
			
	if(prime == 1)
	{
		printf("%d�O���\n", input);
	}
	
	
	system("pause");
	return 0;
}
