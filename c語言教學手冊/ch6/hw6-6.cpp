#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int kg, height;
	printf("�п�J�����P�魫: ");
	scanf("%d %d", &kg, &height);
	
	if(kg>90)
	{
		if(height < 180)
		{
			printf("�魫�L��\n");
		}
		else
		{
			printf("���|�L��\n");
		}
	}
	else
	{
		printf("���|�L��\n");
	}
	
	system("pause");
	return 0;
	
}
