#include <stdio.h>
#include <stdlib.h>
#define SIZE (10)

int min_idx(int arr[]);
int main(void)
{
	int arr[] = {2, 3, 1, 7, 9, 10, 15, 6, 4, 5};
	
	printf("arr�̤p�Ȧb��%d��\n", min_idx(arr)+1);

	system("pause");
	return 0;
}

int min_idx(int arr[])
{
	int i, idx;

	idx = 0;
	for(i=0;i<SIZE;i++)
		if(arr[idx] > arr[i])
			idx = i;

	return idx;
}

