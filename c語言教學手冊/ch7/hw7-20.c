#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	int times=1;
	
	do
	{
		do
		{
			printf("��%d��: �п�J�@��1~50�d�򤺾��: ",times);
			scanf("%d", &n);
		}
		while((n>50) || (n<1));
		
		for(i=1;i<n;i++)
		{
			printf("*");
		}
		printf("\n");
		times++;
	}
	while(times<=3); //�p��T�� 	
	
	system("pause");
	return 0;
}
