#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num=1;
	int sum=0;
	int i;
	
	do
	{
		printf("�п�J������: ");
		scanf("%d", &num);	
	}while(num%2==1);
	
	for(i=2;i<=num;i=i+2)
	{
		sum+=i;
	}
	printf("�`�M��%d\n", sum);
	
	system("pause");
	return 0;
}

