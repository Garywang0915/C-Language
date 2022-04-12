#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double sum;
	int i;
	
	for(i=0;i<3;i++)
	{
		double *num = (double *)malloc(sizeof(double));
		printf("Please input a num: ");
		scanf("%lf", num);
		sum = sum + *(num);
	} 
	printf("Sum: %2.1lf, average = %2.2f\n", sum, sum/3);

	system("pause");
	return 0;
}

