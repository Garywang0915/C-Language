#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int kg;
	
	printf("請輸入體重: ");
	scanf("%d", &kg);
	
	if(kg > 90)
	{
		printf("%d 體重過重\n", kg);
	}
	else 
	{
		printf("%d 不會過重\n", kg);
	}

	system("pause");
	return 0;
} 
