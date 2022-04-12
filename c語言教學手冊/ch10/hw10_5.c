#include <stdio.h>
#include <stdlib.h>

void show(int a, int b, int *ptr1, int *ptr2);
int main(void)
{
	int a=5, b=10;
	int *ptr1, *ptr2;
	
	ptr1 = &a;
	ptr2 = &b;
	show(a,b,ptr1,ptr2);
	*ptr1 = 7;
	show(a,b,ptr1,ptr2);
	*ptr2 = 32;
	show(a,b,ptr1,ptr2);
	a=17;
	show(a,b,ptr1,ptr2);
	ptr1=ptr2;
	show(a,b,ptr1,ptr2);
	*ptr1 = 9;
	show(a,b,ptr1,ptr2);
	ptr1 = &a;
	show(a,b,ptr1,ptr2);
	a = 64;
	show(a,b,ptr1,ptr2);
	*ptr2 = *ptr1 +5;
	show(a,b,ptr1,ptr2);
	ptr2 = &a;
	show(a,b,ptr1,ptr2);

	system("pause");
	return 0;
}
void show(int a, int b, int *ptr1, int *ptr2)
{
	printf("a = %d, b= %d, ptr1 = %p, *ptr1 = %d, ptr2 = %p, *ptr2 = %d\n", a, b, ptr1, *ptr1, ptr2, *ptr2);
}

