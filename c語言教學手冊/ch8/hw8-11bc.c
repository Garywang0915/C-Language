#include <stdio.h> 
#include <stdlib.h>

int find(int n);
int main(void)
{
	int i;

	//printf("��5�Ӻ����]�l���D����Ƭ�: %d\n", find(5));
	//printf("��7�Ӻ����]�l���D����Ƭ�: %d\n", find(7));
	
	for(i=1;i<13;i++)
	{
		printf("��%d�Ӻ����]�l���D����Ƭ�: %d\n", i, find(i));
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
