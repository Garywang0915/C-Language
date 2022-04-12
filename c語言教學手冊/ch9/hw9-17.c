#include <stdio.h>
#include <stdlib.h>
#define SIZE (10)

int min(int arr[]);
int main(void)
{
	int arr[] = {2, 3, 1, 7, 9, 10, 15, 6, 4, 5};
	int MIN;
	
	printf("arr³Ì¤p­È¬°%d\n", min(arr));

	system("pause");
	return 0;
}

int min(int arr[])
{
	int i, MIN;

	MIN = arr[0];
	for(i=0;i<SIZE;i++)
	{
		if(MIN > arr[i])
		{
			MIN = arr[i];
		}
	}
	return MIN;
}

