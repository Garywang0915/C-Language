#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char i;
	
	printf("�п�J�r�� ");
	scanf(" %c", &i);	

	switch(i)
	{
		case 'a':
			printf("�z��Ja\n");
			break;
		case 'b':
			printf("�z��Jb\n");
			break;
		default:
			printf("�z��J�����Oa��b\n");
			break;
	}
	
	system("pause");
	return 0;
}
