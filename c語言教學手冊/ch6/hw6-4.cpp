#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("請輸入一個整數: ");
	scanf("%d", &num);
	
	if(num>=0)
	{
		printf("%d 絕對值為 %d\n", num, num);
	}
	else
	{
		printf("%d 絕對值為 %d\n", num, -num);
	}

	system("pause");
	return 0;
} 
		

