#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A[5] = {74,48,30,17,62};
	int i;
	int *min,*max;
	
	min = max = A;
	printf("max = %d, min = %d\n", *max, *min);
	for(i=0;i<5;i++)
	{
		if(*(A+i) > *max)
			max = A+i;
		if(*(A+i) < *min)
			min = A+i; 
	}
	printf("max = %d, min = %d\n", *max, *min);
	
	system("pause");
	return 0;
}

