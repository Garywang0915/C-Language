#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x, y;
	
	printf("請輸入x座標: ");
	scanf("%f", &x);
	printf("請輸入y座標: ");
	scanf("%f", &y);
	
	if((x > 0) && (y > 0))
	{
		printf("(%f, %f) 在第一象限\n", x, y);
	}
	else if((x > 0) && (y < 0)) 
	{
		printf("(%f, %f) 在第四象限\n", x, y);
	}
	else if((x < 0) && (y < 0)) 
	{
		printf("(%f, %f) 在第三象限\n", x, y);
	}
	else
	{
		printf("(%f, %f) 在第二象限\n", x, y);
	}
	
	system("pause");
	return 0;
}
