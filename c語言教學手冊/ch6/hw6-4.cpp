#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);
	
	if(num>=0)
	{
		printf("%d ����Ȭ� %d\n", num, num);
	}
	else
	{
		printf("%d ����Ȭ� %d\n", num, -num);
	}

	system("pause");
	return 0;
} 
		

