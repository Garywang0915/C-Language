#include <stdio.h>
#include <stdlib.h>

void replace(int *ptr, int n,int num);	//��ptr�������x�}arr[n]�󴫦�num 
int main(void)
{
	int a[5] = {13,32,67,14,95};
	int i, num=24;
	
	printf("�x�}���e��: ");
	for(i=0;i<5;i++)
		printf("%3d", a[i]);
	printf("\n");

	replace(a, 3, num);
	printf("�x�}���e��: ");
	for(i=0;i<5;i++)
		printf("%3d", a[i]);
	printf("\n");

	system("pause");
	return 0;
}

void replace(int *ptr, int n,int num)
{
	*(ptr+n) = num; //��ptr�������x�}arr[n]�󴫦�num 	
}
