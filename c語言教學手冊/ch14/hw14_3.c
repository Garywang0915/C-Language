#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *arr = (double *)malloc(sizeof(double)*3);
	double sum;
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Please input a num: ");
		scanf("%lf", arr+i);
		sum = sum + *(arr+i);
	} 
	printf("Sum: %2.1lf, average = %2.2f\n", sum, sum/3);

	system("pause");
	return 0;
}

