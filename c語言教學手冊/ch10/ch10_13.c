#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, a[5] = {32, 16, 35 , 65, 52};
	int *ptr = a;
	printf("a = %p\n", a); // ���б`��a����
	printf("&a = %p\n", &a); // ���б`��a����} 

	printf("%d\n", sizeof(a));

	for(i=0;i<5;i++)
	{
		printf("a[%d] = %p\n", i, &a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("ptr[%d] = %d\n", i, *ptr++);
	}

	system("pause");
	return 0;
}

