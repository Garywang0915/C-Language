#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float num = 12.6f, *ptr;
	ptr = &num;
	
	printf("The address of num %f is %p\n", num, &num);
	printf("The address of ptr %p is %p\n", ptr, &ptr);
	
	

	system("pause");
	return 0;
}

