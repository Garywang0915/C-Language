#include <stdio.h>
#include <stdlib.h>

void counter(void);
int main(void)
{
	
	counter();
	counter();
	system("pause");
	return 0;
}

void counter(void)
{
	static int count = 1;
	
	printf("counter�w�g�Q�I�s%d���F\n", count);
	count++;
} 
