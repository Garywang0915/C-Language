#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a=159;
	int b=0147;
	int c=0x618A;

	printf("a的十進位: %d, a的八進位: %o, a的十六進位: %p\n", a, a, a);
	printf("b的十進位: %d, b的八進位: %o, b的十六進位: %p\n", b, b, b);
	printf("c的十進位: %d, c的八進位: %o, c的十六進位: %p\n", c, c, c);

	system("pause");
	return 0;
}

