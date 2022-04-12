#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array[] = {3, 5, 0, 3, 2, 4, 1, 6, 8, 5, 4, 3, 2};
	int i, count=0;
	
	printf("Array內的元素數量為: %d\n", sizeof(array)/4);

	for(i=0;i<(sizeof(array)/4);i++)
	{
		if(array[i] >=3 & array[i]<=6)
			count++;
	}
	printf("介於3~6的函數總共有%d個\n", count);

	system("pause");
	return 0;
}

