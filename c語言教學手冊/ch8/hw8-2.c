#include <stdio.h> 
#include <stdlib.h>

void kitty(int a);

int main(void)
{
	
	kitty(3);
	system("pause");
	return 0;
}

void kitty(int a)
{
	int i;
	
	for(i=0;i<a;i++)
		printf("Hello Kitty\n");
}
