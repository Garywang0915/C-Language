#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input;
	int cnt=0;
	int passwd=6128;

	for(cnt=1;cnt<=3;cnt++)
	{
		printf("�п�J�K�X: ");
		scanf("%d", &input);
		
		if(input==passwd)
		{
			printf("�K�X��J���T�A�w��ϥΥ��t��!!\n");
			break;
		}
		else	//��J���~ 
		{
			if(cnt==3)	//�ĤT�� 
			{
				printf("�K�X��J�W�L�T��!!\n");
			}
			continue; //�^��̶}�Y
		}
	}
	
	system("pause");
	return 0;
}
