#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5] = {2, 3, 1, 7, 9};
	int i;
	
	for(i=0;i<5;i++)
		printf("%2d", arr[i]);
	printf("\n");


	system("pause");
	return 0;
}

