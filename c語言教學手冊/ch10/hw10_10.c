#include <stdio.h>
#include <stdlib.h>

void count(int *);
int main(void)
{
	int num=27;
	int *ptr = &num;
	int i;

	printf("�I�s�e, sum = %d\n", num);	
	for(i=0;i<10;i++)
	{
		count(ptr);
		printf("�I�s%d����, sum = %d\n", i+1, num);	
	} 

	system("pause");
	return 0;
}

void count(int *ptr)
{
	*ptr = *ptr +1; //�C�I�s�@���N+1 
}
 

