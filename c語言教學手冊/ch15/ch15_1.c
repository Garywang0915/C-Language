#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

void show_binary(int);
int main(void)
{
	printf("89的2進位為: ");
	show_binary(89);

	system("pause");
	return 0;
}
void show_binary(int num)
{
	int i, b[SIZE]={0};
	for(i=1;i<SIZE;i++)
	{
		b[SIZE-i] = num%2;
		num = num/2;
	}
	for(i=0;i<SIZE;i++)
		printf("%d", b[i]);
	printf("\n");
}
