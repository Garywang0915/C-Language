#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i=2;
	int input;
	int prime=1;
	
	do
	{
		printf("請輸入一個正整數: ");
		scanf("%d", &input);
	}
	while(input<=1);
	
	while(i<(input-1))	//除到持續增加到input-1 
	{
		if(input%i==0) //被整除
		{
			printf("%d不是質數\n", input);
			prime = 0;
			break;
		}	
		i++;
	}
			
	if(prime == 1)
	{
		printf("%d是質數\n", input);
	}
	
	
	system("pause");
	return 0;
}
