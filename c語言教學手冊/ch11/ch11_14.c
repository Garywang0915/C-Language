#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char key_color; //�ϥΪ̿�J���C�� 
	enum color
	{
		red=114,
		green=103,
		blue=98
	} shirt;
	
	
	do
	{
		printf("�п�Jr, g�άOb:");
		scanf("%c", &key_color);
		fflush(stdin);
	}while(key_color!= red && key_color!= green && key_color!= blue);
	
	shirt = key_color;
	
	switch(shirt)
	{
		case red:
			printf("�z��ܤF����\n");
			break;
		case blue:
			printf("�z��ܤF�Ŧ�\n");
			break;
		case green:
			printf("�z��ܤF���\n");
			break;
	}

	system("pause");
	return 0;
}

