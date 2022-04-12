#include <stdio.h>
#include <stdlib.h>

void add10(int *, int *);
int main(void)
{
	int a=3, b=5;
	
	printf("呼叫函數 add10()前: ");
	printf("a=%d, b=%d\n",a,b);
	add10(&a, &b);
	printf("呼叫函數 add10()後: ");
	printf("a=%d, b=%d\n",a,b);	
	
	system("pause");
	return 0;
}

void add10(int *a, int *b)
{
	*a+=10;
	*b+=10;
}
