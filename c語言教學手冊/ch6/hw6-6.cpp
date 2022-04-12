#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int kg, height;
	printf("請輸入身高與體重: ");
	scanf("%d %d", &kg, &height);
	
	if(kg>90)
	{
		if(height < 180)
		{
			printf("體重過重\n");
		}
		else
		{
			printf("不會過重\n");
		}
	}
	else
	{
		printf("不會過重\n");
	}
	
	system("pause");
	return 0;
	
}
