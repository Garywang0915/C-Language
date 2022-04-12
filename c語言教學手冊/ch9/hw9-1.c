#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[5] = {0};
	int i;
	
	for(i=0;i<5;i++)
	{
		arr[i] = i+1;
		printf("%2d", arr[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}

