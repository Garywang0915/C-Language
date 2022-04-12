#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		int num;
		char ch;
		double dist;
	}aaa;
	
	printf("Size of aaa = %d\n", sizeof(aaa));


	system("pause");
	return 0;
}

