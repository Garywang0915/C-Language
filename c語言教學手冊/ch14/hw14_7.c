#include <stdio.h>
#include <stdlib.h>

int insertElement(int *arr, int item, int pos, int length);
int main(void)
{
	int i, length_new;
	int arr[10] = {12,56,37,63};
	
	printf("Array: \n");
	for(i=0;i<4;i++)
		printf("%d ", *(arr+i));

	length_new = insertElement(arr, 10,2,4);

	printf("\nNew Array: \n");
	for(i=0;i<length_new;i++)
		printf("%d ", *(arr+i));


	system("pause");
	return 0;
}

int insertElement(int *arr, int item, int pos, int length)
{
	int i; 
	
	for(i=length+1;i>=pos;i--)
		arr[i] = arr[i-1];
	arr[pos] = item;
	
	return length+1;
}
