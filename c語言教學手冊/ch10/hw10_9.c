#include <stdio.h>
#include <stdlib.h>

void address(float *);
int main(void)
{
	float pi=3.14f;
	float *ptr = &pi;
	
	address(&pi);
	address(ptr);

	system("pause");
	return 0;
}

void address(float *p1)
{
	printf("���}%p��, �x�s���ܼƤ��e��%f\n", p1, *p1);
}
