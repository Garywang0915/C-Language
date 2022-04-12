#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num = 4.2f;
	int a1=4, a2=12;

	printf("The address of num %f is %p\n", num, &num);
	printf("The address of a1 %d is %p\n", a1, &a1);
	printf("The address of a2 %d is %p\n", a2, &a2);

	system("pause");
	return 0;
}

