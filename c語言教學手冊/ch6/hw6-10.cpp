#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x, y;
	
	printf("�п�Jx�y��: ");
	scanf("%f", &x);
	printf("�п�Jy�y��: ");
	scanf("%f", &y);
	
	if((x > 0) && (y > 0))
	{
		printf("(%f, %f) �b�Ĥ@�H��\n", x, y);
	}
	else if((x > 0) && (y < 0)) 
	{
		printf("(%f, %f) �b�ĥ|�H��\n", x, y);
	}
	else if((x < 0) && (y < 0)) 
	{
		printf("(%f, %f) �b�ĤT�H��\n", x, y);
	}
	else
	{
		printf("(%f, %f) �b�ĤG�H��\n", x, y);
	}
	
	system("pause");
	return 0;
}
