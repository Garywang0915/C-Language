#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double b1 = 3.14;
	int num = 5;

	printf("The address of num %f is %p\n", b1, &b1);
	printf("The address of a1 %d is %p\n", num, &num);

	system("pause");
	return 0;
}

