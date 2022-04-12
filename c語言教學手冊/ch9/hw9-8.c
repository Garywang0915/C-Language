#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[] = {3, 5, 0, 3, 2, 4, 1, 6, 8, 5, 4, 3, 2};
	int i, max_index=0, min_index=0;
	int size;
	
	size = sizeof(array)/4;

	for(i=0;i<size;i++)
	{
		if(array[max_index] < array[i])
			max_index = i;
			
		if(array[min_index] > array[i])
			min_index = i;
	}
	printf("最大值為array[%d] = %d\n", max_index, array[max_index]);
	printf("最小值為array[%d] = %d\n", min_index, array[min_index]);

	system("pause");
	return 0;
}

