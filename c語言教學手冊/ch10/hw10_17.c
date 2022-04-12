#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int A[5] = {74,48,30,17,62};
	int i,min,max;
	
	min = max = 0;

	for(i=0;i<5;i++)
	{
		if(*(A+i) > *(A+max))
			max = i;
		if(*(A+i) < *(A+min))
			min = i; 
	}
	printf("The index of max = %d, min = %d\n", max, min);
	
	system("pause");
	return 0;
}

