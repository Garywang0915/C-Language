#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;
	
	while(1)
	{
		printf("�п�J�K�X: ");
		scanf("%d", &input);
		
		if(input==passwd)
		{
			printf("�K�X��J���T�A�w��ϥΥ��t��!!\n");
			break;
		}
		else
		{
			cnt++;
			if (cnt == 3)
			{
				printf("�K�X��J�W�L�T��!!\n");
				break;
			}
			continue; //�^��̶}�Y
		}		
	}
	
	system("pause");
	return 0;
}
