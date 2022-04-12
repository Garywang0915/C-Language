#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5] = {34,76,33,42,76};
	int i;
	
	printf("Old Array: \n");
	for(i=0;i<5;i++)
		printf("%2d ", *(arr+i));
	
	printf("\nNew Array: \n");
	for(i=0;i<5;i++)
		printf("%2d ", (*(arr+i))+10);
	print("\n");

	system("pause");
	return 0;
}

