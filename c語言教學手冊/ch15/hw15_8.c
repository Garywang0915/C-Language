#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#define SIZE (8) 

void show_decimal(char *, int );
 
int main(void)
{
	char *str="01011100";
	
	show_decimal(str, SIZE);

	system("pause");
	return 0;
}
void show_decimal(char *arr, int n)
{
	int i,num=0;
	for(i=0;i<n;i++)
	{
		num+= (arr[i]-48)*(pow(2,n-i-1));
	}
	printf("¤Q¶i¦ì: %d\n", num);
}
