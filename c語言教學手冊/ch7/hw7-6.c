#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	
	do
	{
		printf("�п�J�����(n>0): ");
		scanf("%d",&n);
	}
	while(n<=0);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0) //�i�H�Q�㰣 
		{
			printf("%d�O%d���]��\n", i,n);
		}
	}
	
	system("pause");
	return 0;
}
