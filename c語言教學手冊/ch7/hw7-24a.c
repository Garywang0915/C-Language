#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i=0;
	int times=1;
	
	
	while(times <= 3)
	{
		printf("��%d��: �п�J�@��1~50�d�򤺾��: ",times);
		scanf("%d", &n);
		
		if(n>50 || n<0)
			continue;
		
		while(i<n)
		{
			printf("*");
			i++;
		}
		printf("\n");
		
		times++; 
		i=0;
	}
	
	system("pause");
	return 0;
}
