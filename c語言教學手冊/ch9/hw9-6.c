#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[] = {3, 5, 0, 3, 2, 4, 1, 6, 8, 5, 4, 3, 2};
	int i, count=0;
	
	printf("Array���������ƶq��: %d\n", sizeof(array)/4);

	for(i=0;i<(sizeof(array)/4);i++)
	{
		if(array[i] >=3 & array[i]<=6)
			count++;
	}
	printf("����3~6������`�@��%d��\n", count);

	system("pause");
	return 0;
}

