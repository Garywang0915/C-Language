#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char key_color; //�ϥΪ̿�J���C�� 
	enum color
	{
		red=114,
		RED=82,
		green=103,
		GREEN=71,
		blue=98,
		BLUE=66
	} shirt;
	
	do
	{
		printf("�п�Jr, g�άOb:");
		scanf("%c", &key_color);
		fflush(stdin);
	}while(key_color!= red && key_color!= green && key_color!= blue &&\
		   key_color!= RED && key_color!= GREEN && key_color!= BLUE);
	
	shirt = key_color;
	
	switch(shirt)
	{
		case RED:
		case red:
			printf("�z��ܤF����\n");
			break;
		case BLUE:
		case blue:
			printf("�z��ܤF�Ŧ�\n");
			break;
		case GREEN:
		case green:
			printf("�z��ܤF���\n");
			break;
	}

	system("pause");
	return 0;
}

