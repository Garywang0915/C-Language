#include <stdio.h> 
#include <stdlib.h>

int find(int n);
int main(void)
{
	int i;

	//printf("第5個滿足孫子問題的整數為: %d\n", find(5));
	//printf("第7個滿足孫子問題的整數為: %d\n", find(7));
	
	for(i=1;i<13;i++)
	{
		printf("第%d個滿足孫子問題的整數為: %d\n", i, find(i));
	}
	
	system("pause");
	return 0;
}

int find(int n)
{
	int count = 0;
	int num=1;
	
	while(count < n)
	{
		if(num%3 ==2 && num%5==3 && num%7 ==2)
			count++;
		num++;
	}	
	return num-1;
}
