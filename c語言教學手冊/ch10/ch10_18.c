#include <stdio.h>
#include <stdlib.h>
#define SIZE (5)

int *maximun(int *);
int main(void)
{
	int a[SIZE] = {3, 1, 7, 2, 6};
	int i, *ptr;
	printf("Array a: ");
	for(i=0;i<SIZE;i++)
		printf("%d ", a[i]);
	ptr = maximun(a);
	printf("\nMaximun: %d\n", *ptr);

	system("pause");
	return 0;
}

int *maximun(int *arr)
{
	int i, *max;
	max = arr;	//���]�̤j�Ȭ�arr��1�Ӥ��� 
	for(i=0;i<SIZE;i++)
	{
		if(*(arr+i) > *max)
			max = arr+i; //���N��}	
	}
	return max;
}
