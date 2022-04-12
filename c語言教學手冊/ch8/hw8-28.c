#include <stdio.h>
#include <stdlib.h>

int count;

void counter(void);
int main(void)
{
	count = 1;
	
	counter();
	counter();
	system("pause");
	return 0;
}

void counter(void)
{
	printf("counter已經被呼叫%d次了\n", count);
	count++;
} 
