#include <stdio.h>
#include <stdlib.h>

void count(int *);
int main(void)
{
	int num=27;
	int *ptr = &num;
	int i;

	printf("呼叫前, sum = %d\n", num);	
	for(i=0;i<10;i++)
	{
		count(ptr);
		printf("呼叫%d次後, sum = %d\n", i+1, num);	
	} 

	system("pause");
	return 0;
}

void count(int *ptr)
{
	*ptr = *ptr +1; //每呼叫一次就+1 
}
 

