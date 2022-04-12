#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *ptr = (int *)malloc(sizeof(int));
	
	*ptr = 12;
	printf("ptr^2 = %d\n", (*ptr)*(*ptr));


	system("pause");
	return 0;
}
