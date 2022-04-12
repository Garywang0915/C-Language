#include <stdio.h>
#include <stdlib.h>
#define SIZE (10)

void square(int arr[]);
int main(void)
{
	int arr[SIZE] = {2, 3, 1, 7, 9, 10, 15, 6, 4, 5};
	int i;

	
	//進行square前
	printf("Array = ");
	for(i=0;i<SIZE;i++)
		printf("%4d", arr[i]);
	printf("\n");
	
	square(arr);
	//進行square後
	printf("Array = ");
	for(i=0;i<SIZE;i++)
		printf("%4d", arr[i]);
	printf("\n");

	system("pause");
	return 0;
}

void square(int arr[])
{
	int i;
	for(i=0;i<SIZE;i++)
		arr[i] = arr[i]*arr[i];
}
