#include <stdio.h>
#include <stdlib.h>
#define MAX (10)

void square(int *);
int main(void)
{
	int A[MAX] = {18, 17, 15, 13, 8, 11, 16, 1, 5, 22};
	int *ptr = A;
	int i;
	
	for(i=1;i<MAX;i++)
		printf("A[i] = %4d  ", A[i]);
	printf("\n");
	
	square(ptr);
	
	for(i=1;i<MAX;i++)
		printf("A[i] = %4d  ", A[i]);
	printf("\n");
	
	system("pause");
	return 0;
}
void square(int *arr)
{
	int i;
	
	for(i=0;i<MAX;i++)
		*(arr+i)= (*(arr+i))*(*(arr+i));
}
