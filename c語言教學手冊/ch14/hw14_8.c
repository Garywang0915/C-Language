#include <stdio.h>
#include <stdlib.h>

int deleteElement(int *arr, int pos, int length); 
int main(void)
{
	int arr[10] = {12,56,37,63};
	int i,length_new;

	printf("Array: \n");
	for(i=0;i<4;i++)
		printf("%d ", *(arr+i));

	length_new = deleteElement(arr,1,4);

	printf("\nNew Array: \n");
	for(i=0;i<length_new;i++)
		printf("%d ", *(arr+i));
	printf("\n");
	
	system("pause");
	return 0;
}
int deleteElement(int *arr, int pos, int length)
{
	int i;
	
	if(pos > length)
	{
		printf("Please check your input pos and length!\n");
		return 0;
	}
	
	for(i=pos;i<length;i++)
		arr[i] = arr[i+1];
	
	return length-1;
}
