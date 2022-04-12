#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5] = {34,76,33,42,76};
	int *ptr = arr;
	int i;
	
	printf("Old Array: \n");
	for(i=0;i<5;i++)
		printf("%2d ", *(ptr+i));
	
	printf("\nNew Array: \n");
	for(i=0;i<5;i++)
		printf("%2d ", (*(ptr+i))+10);

	system("pause");
	return 0;
}

