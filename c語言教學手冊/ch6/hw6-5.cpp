#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int kg;
	
	printf("�п�J�魫: ");
	scanf("%d", &kg);
	
	if(kg > 90)
	{
		printf("%d �魫�L��\n", kg);
	}
	else 
	{
		printf("%d ���|�L��\n", kg);
	}

	system("pause");
	return 0;
} 
