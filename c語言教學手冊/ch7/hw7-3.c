#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int n;
	int i;
	int total=0;
	
	do
	{
		printf("�п�J�Ʀrn ");
		scanf("%d", &n);
	}
	while(n % 2 == 0); //���� 
	
	for(i=1;i<=n;i=i+2)
	{
		total+=i;
	}
	
	printf("�q1+3+...+%d �`�M�� %d \n", n, total);
	
	system("pause");
	return 0;
}
