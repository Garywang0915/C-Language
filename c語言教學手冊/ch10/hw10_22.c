#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[2][20] = {"Time is money", "Have a good time"};
	int i;
	
	for(i=0;i<2;i++)
		puts(str[i]);

	system("pause");
	return 0;
}

