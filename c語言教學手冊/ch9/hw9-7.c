#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	float arr[5];
	float sum;
	
	for(i=0;i<5;i++)
	{
		printf("Please input a num: ");
		scanf("%f", &arr[i]);
		sum+=arr[i];
	}
	printf("arr������������: %f\n", sum/5);

	system("pause");
	return 0;
}

