#include <stdio.h>
#include <stdlib.h>

void show(int a, int b, int *ptr1, int *ptr2);
int main(void)
{
	int a = 28, b = 16;
	int *ptr1, *ptr2;
	
	ptr1 = &b;
	ptr2 = &a;
	show(a, b, ptr1, ptr2);
	*ptr1 = 4;
	show(a, b, ptr1, ptr2);
	a=16;
	show(a, b, ptr1, ptr2);
	*ptr2=12;
	show(a, b, ptr1, ptr2);
	ptr2=ptr1;
	show(a, b, ptr1, ptr2);
	*ptr1=19;
	show(a, b, ptr1, ptr2);
	ptr1= &a;
	show(a, b, ptr1, ptr2);
	a=7;
	show(a, b, ptr1, ptr2);
	*ptr2 = *ptr1;
	show(a, b, ptr1, ptr2);

	system("pause");
	return 0;
}
void show(int a, int b, int *ptr1, int *ptr2)
{
	printf("a = %d, b= %d, ptr1 = %p, *ptr1 = %d, ptr2 = %p, *ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
}
