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
	printf("counter�w�g�Q�I�s%d���F\n", count);
	count++;
} 
