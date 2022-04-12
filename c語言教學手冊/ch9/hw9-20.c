#include <stdio.h>
#include <stdlib.h>
#define SIZE (10)

void count(int arr[]);
int main(void)
{
	int arr[SIZE] = {2, 3, 1, 7, 9, 10, 15, 6, 4, 5};

	count(arr);

	system("pause");
	return 0;
}
void count(int arr[])
{
	int count_odd=0, count_even=0;
	int i;
	
	for(i=0;i<SIZE;i++) 
	{
		if(arr[i]!=0)
		{
			if(arr[i]%2 == 1)
				count_odd++;
			else
				count_even++;
		}
	}
	printf("arr陣列中奇數有%d個, 偶數有%d個\n", count_odd, count_even);
}
