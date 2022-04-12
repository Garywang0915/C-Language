#include <stdio.h>
#include <stdlib.h>

void replace(int *ptr, int n,int num);	//把ptr對應的矩陣arr[n]更換成num 
int main(void)
{
	int a[5] = {13,32,67,14,95};
	int i, num=24;
	
	printf("矩陣內容為: ");
	for(i=0;i<5;i++)
		printf("%3d", a[i]);
	printf("\n");

	replace(a, 3, num);
	printf("矩陣內容為: ");
	for(i=0;i<5;i++)
		printf("%3d", a[i]);
	printf("\n");

	system("pause");
	return 0;
}

void replace(int *ptr, int n,int num)
{
	*(ptr+n) = num; //把ptr對應的矩陣arr[n]更換成num 	
}
