#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int num=0;
	
	printf("�п�J1~4�������ƭ�: ");
	scanf("%d", &num);

	switch(num)
	{
		case 1:
			printf("%d:�K��\n",num);
			break;
		case 2: 
			printf("%d:�L��\n",num);
			break;
		case 3: 
			printf("%d:���\n",num);
			break;
		case 4: 
			printf("%d:�V��\n",num);
			break;
		default:
			printf("��J���~\n");
			break;
	}
	
	system("pause");
	return 0;
}
